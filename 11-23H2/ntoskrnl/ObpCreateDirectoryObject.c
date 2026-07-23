/*
 * XREFs of ObpCreateDirectoryObject @ 0x1407F18E0
 * Callers:
 *     NtCreateDirectoryObjectEx @ 0x1407F18A0 (NtCreateDirectoryObjectEx.c)
 *     NtCreateDirectoryObject @ 0x1407F18C0 (NtCreateDirectoryObject.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     ObCreateObjectEx @ 0x140730AA0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140735BC0 (ObInsertObjectEx.c)
 *     RtlIsSandboxedToken @ 0x1407F3A60 (RtlIsSandboxedToken.c)
 */

__int64 __fastcall ObpCreateDirectoryObject(__int64 *a1, int a2, __int64 a3, void *a4, int a5)
{
  PVOID v7; // rsi
  char PreviousMode; // r15
  int v9; // r14d
  int inserted; // edi
  _QWORD *v11; // rdi
  int v12; // r12d
  int v13; // edx
  int v14; // eax
  __int64 v16; // rcx
  PVOID *Object; // [rsp+20h] [rbp-78h]
  PVOID v18; // [rsp+50h] [rbp-48h] BYREF
  PVOID v19; // [rsp+58h] [rbp-40h] BYREF
  __int64 v20[7]; // [rsp+60h] [rbp-38h] BYREF

  v20[0] = 0LL;
  v19 = 0LL;
  v7 = 0LL;
  v18 = 0LL;
  if ( (a5 & 0xFFFFFFFC) != 0 )
    goto LABEL_26;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v9 = a5 & 2;
    if ( (a5 & 2) == 0 )
    {
      v16 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
        v16 = (__int64)a1;
      *(_QWORD *)v16 = *(_QWORD *)v16;
      goto LABEL_4;
    }
LABEL_26:
    inserted = -1073741581;
    goto LABEL_12;
  }
  v9 = a5 & 2;
LABEL_4:
  if ( !a4
    || (v18 = 0LL,
        inserted = ObReferenceObjectByHandle(a4, 3u, ObpDirectoryObjectType, PreviousMode, &v18, 0LL),
        v7 = v18,
        inserted >= 0) )
  {
    inserted = ObCreateObjectEx(
                 PreviousMode,
                 ObpDirectoryObjectType,
                 a3,
                 PreviousMode,
                 (__int64)Object,
                 344,
                 0,
                 0,
                 &v19,
                 0LL);
    if ( inserted >= 0 )
    {
      v11 = v19;
      memset(v19, 0, 0x158uLL);
      v11[37] = 0LL;
      *((_DWORD *)v11 + 85) = -1;
      v12 = 0;
      if ( v7 )
      {
        v12 = 4;
        v11[39] = v7;
        v7 = 0LL;
        v18 = 0LL;
        if ( (unsigned __int8)RtlIsSandboxedToken(0LL) )
          v12 = 20;
      }
      v13 = v12 | 8;
      if ( (a5 & 1) == 0 )
        v13 = v12;
      v14 = v13 | 0x20;
      if ( !v9 )
        v14 = v13;
      *((_DWORD *)v11 + 84) |= v14;
      inserted = ObInsertObjectEx((char *)v11, 0LL, a2, 0, 0, 0LL, v20);
      v19 = 0LL;
      *a1 = v20[0];
    }
  }
LABEL_12:
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( v19 )
    ObfDereferenceObject(v19);
  return (unsigned int)inserted;
}
