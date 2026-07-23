/*
 * XREFs of MiValidateExistingImage @ 0x1406AA324
 * Callers:
 *     MiShareExistingControlArea @ 0x140723D4C (MiShareExistingControlArea.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     MiValidateSectionSigningPolicy @ 0x1406AA5DC (MiValidateSectionSigningPolicy.c)
 *     MiRelocateImageAgain @ 0x1406AA700 (MiRelocateImageAgain.c)
 *     SeGetImageRequiredSigningLevel @ 0x1406AA89C (SeGetImageRequiredSigningLevel.c)
 */

__int64 __fastcall MiValidateExistingImage(unsigned int *a1)
{
  __int64 *v1; // r15
  char v2; // r14
  void *v3; // r12
  int v4; // edi
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v10; // r13
  int v11; // esi
  __int64 v12; // rcx
  unsigned int v13; // ebp
  int Blink; // ebp
  _BYTE *v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  __int64 v21; // [rsp+80h] [rbp+8h] BYREF

  v1 = (__int64 *)*((_QWORD *)a1 + 8);
  v2 = 0;
  v3 = (void *)*((_QWORD *)a1 + 7);
  v4 = 0;
  if ( (v1[7] & 0x800) != 0 && (*a1 & 0x100000) != 0 )
  {
    dword_140C65910 = 12;
    return 3221226547LL;
  }
  if ( (*a1 & 0x40) != 0 )
    v6 = 2LL;
  else
    v6 = (*a1 & 0x20) != 0;
  result = MiRelocateImageAgain(*((_QWORD *)a1 + 8), v6);
  if ( (int)result < 0 )
  {
    dword_140C65910 = 13;
    return result;
  }
  v8 = *a1;
  if ( (v8 & 0x100) != 0 )
  {
    v9 = 4;
  }
  else if ( (v8 & 0x20) != 0 )
  {
    v9 = 1;
  }
  else if ( (v8 & 0x10) != 0 )
  {
    v9 = (*a1 & 0x1000) != 0 ? 8 : 2;
  }
  else
  {
    v9 = 0;
  }
  v10 = *v1;
  v11 = v9 | 0x10;
  if ( (v8 & 0x800) == 0 )
    v11 = v9;
  v12 = (unsigned int)v8;
  if ( (v8 & 0x400) != 0 && (v8 & 0x10) == 0 )
  {
    Blink = (int)KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
    LOBYTE(v21) = 0;
    result = SeGetImageRequiredSigningLevel(v3, (__int64)&v21);
    if ( (int)result < 0 )
    {
      dword_140C65910 = 14;
      return result;
    }
    v12 = *a1;
    if ( (v12 & 0x800) == 0 )
    {
      if ( *((_BYTE *)a1 + 24) && (Blink & 0x800000) != 0 )
        v4 = 1;
      if ( (Blink & 0x1000000) != 0 )
      {
        v2 = 8;
      }
      else
      {
        v2 = 0;
        if ( (Blink & 0x2000000) != 0 )
          v2 = 6;
      }
    }
    *((_BYTE *)a1 + 24) = v21;
  }
  if ( (v12 & 0x100000) != 0 )
  {
    v11 |= 0x40000000u;
    if ( !*((_BYTE *)a1 + 24) )
      *((_BYTE *)a1 + 24) = 4;
  }
  v13 = v11 | 0x20000000;
  if ( (v12 & 0x800000) == 0 )
    v13 = v11;
  if ( (v12 & 0x400) != 0 )
  {
    if ( (v12 & 0x10) != 0 )
      goto LABEL_43;
    v15 = (_BYTE *)(v10 + 15);
    v16 = *(unsigned __int8 *)(v10 + 15);
    LOBYTE(v8) = *((_BYTE *)a1 + 24);
    if ( qword_140C37A58 )
    {
      v17 = ((unsigned int)v16 >> 1) & 7;
      LOBYTE(v16) = (unsigned __int8)v16 >> 4;
      v18 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64, _QWORD, void *))qword_140C37A58)(
              v13,
              v8,
              v16,
              v17,
              *((_QWORD *)a1 + 20),
              v3);
      LOBYTE(v8) = *((_BYTE *)a1 + 24);
      LOBYTE(v16) = *v15;
      if ( v18 )
        goto LABEL_43;
    }
    if ( !qword_140C37A00
      || (LOBYTE(v12) = (unsigned __int8)v16 >> 4, !(unsigned int)qword_140C37A00(v12, v8))
      || (v13 & 0x40000000) != 0 && (*((_DWORD *)v1 + 23) & 0xC0000) != 0x80000
      || (*v15 & 0xF0) == 0 && *(char *)(*(_QWORD *)(v10 + 56) + 46LL) < 0 )
    {
LABEL_43:
      v4 |= 2u;
      v15 = (_BYTE *)(v10 + 15);
    }
    v19 = (int)qword_140C37A00;
    if ( qword_140C37A00 )
    {
      LOBYTE(v8) = v2;
      LOBYTE(v12) = *v15 >> 4;
      v19 = qword_140C37A00(v12, v8);
    }
    v20 = v4 | 4;
    if ( v19 )
      v20 = v4;
    v4 = v20;
    if ( (*a1 & 0x10000000) != 0 )
      v4 = v20 | 8;
  }
  result = MiValidateSectionSigningPolicy(
             1,
             (_DWORD)v3,
             (_DWORD)v1,
             a1[42],
             *((_QWORD *)a1 + 20),
             v13,
             v4,
             *((_BYTE *)a1 + 24),
             v2);
  if ( (int)result < 0 )
    dword_140C65910 = 15;
  return result;
}
