/*
 * XREFs of sub_14097AD20 @ 0x14097AD20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406FB478 @ 0x1406FB478 (sub_1406FB478.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     sub_140979918 @ 0x140979918 (sub_140979918.c)
 *     sub_1409B5CE8 @ 0x1409B5CE8 (sub_1409B5CE8.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14097AD20(
        ULONG_PTR a1,
        unsigned __int64 *a2,
        ULONGLONG a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6,
        char *Src,
        unsigned int a8,
        _DWORD *a9)
{
  unsigned __int64 *v9; // rdi
  PVOID v10; // rsi
  char v11; // al
  __int64 v12; // rcx
  unsigned __int64 v13; // r12
  int v14; // ebx
  int v15; // edi
  char v16; // r9
  __int64 v17; // rcx
  void *v18; // rdi
  __int64 v19; // r9
  char v21; // [rsp+50h] [rbp-F8h]
  size_t Size; // [rsp+70h] [rbp-D8h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+78h] [rbp-D0h] BYREF
  PVOID v26; // [rsp+80h] [rbp-C8h]
  unsigned __int64 v27[2]; // [rsp+88h] [rbp-C0h] BYREF
  unsigned __int64 v28; // [rsp+98h] [rbp-B0h]
  ULONGLONG v29[6]; // [rsp+A0h] [rbp-A8h] BYREF
  _BYTE v30[48]; // [rsp+D0h] [rbp-78h] BYREF

  v28 = a4;
  v9 = a2;
  v29[1] = (ULONGLONG)a2;
  v29[0] = a3;
  Size = a8;
  v27[1] = (unsigned __int64)a9;
  BugCheckParameter1 = 0LL;
  memset(v30, 0, sizeof(v30));
  v27[0] = 0LL;
  v10 = 0LL;
  v26 = 0LL;
  v11 = *((_BYTE *)KeGetCurrentThread() + 562);
  v21 = v11;
  if ( a9 && v11 == 1 )
  {
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a9 < 0x7FFFFFFF0000LL )
      v12 = (__int64)a9;
    *(_DWORD *)v12 = *(_DWORD *)v12;
  }
  if ( a6 == 1 )
  {
LABEL_17:
    if ( MemoryDescriptorList )
    {
      v15 = 4096;
      v13 = a5;
      goto LABEL_19;
    }
LABEL_16:
    v14 = -1073741637;
    goto LABEL_52;
  }
  if ( a6 == 2 )
  {
    if ( !(unsigned __int8)((__int64 (*)(void))sub_1409B5CE8)() )
      goto LABEL_16;
    goto LABEL_17;
  }
  if ( (unsigned int)(a6 - 16) > 1 || !(unsigned __int8)sub_1409B5CE8(8LL) )
    goto LABEL_16;
  v13 = a5;
  if ( a5 )
  {
    v14 = -1073741581;
    goto LABEL_52;
  }
  if ( (unsigned int)Size > 0x24 )
  {
    v14 = -1073741820;
    goto LABEL_52;
  }
  v15 = 0;
LABEL_19:
  if ( (int)sub_1406FB478(v29) >= 0 )
  {
    if ( !v28 )
    {
      v14 = -1073741582;
      goto LABEL_51;
    }
    if ( v13 > v28 )
    {
      v14 = -1073741581;
      goto LABEL_51;
    }
    v16 = v21;
    if ( v21 == 1 )
    {
      v17 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
        v17 = (__int64)a2;
      *(_QWORD *)v17 = *(_QWORD *)v17;
    }
    v27[0] = *a2;
    if ( !(_DWORD)Size )
    {
LABEL_45:
      if ( a1 == -1LL )
      {
        v18 = (void *)*((_QWORD *)KeGetCurrentThread() + 23);
        BugCheckParameter1 = (ULONG_PTR)v18;
      }
      else
      {
        v14 = sub_140732D40(a1, 8, (__int64)PsProcessType, v16, 0x6D566D4Du, &BugCheckParameter1, 0LL, 0LL);
        if ( v14 < 0 )
          goto LABEL_51;
        v18 = (void *)BugCheckParameter1;
        sub_14030D5C0(BugCheckParameter1, 0LL, (__int64)v30, v19);
      }
      v14 = sub_140979918((int)v18, v27, v29[0], v28, v13, a6, (__int64)v10, Size, (__int64)&Size + 4);
      if ( a1 != -1LL )
      {
        sub_1402D0930((__int64)v30, 0LL);
        ObfDereferenceObjectWithTag(v18, 0x6D566D4Du);
      }
      goto LABEL_51;
    }
    if ( v15 && (_DWORD)Size != v15 )
    {
      v14 = -1073741820;
      goto LABEL_51;
    }
    v10 = sub_1402828F0(256, ((unsigned int)Size + 4095LL) & 0xFFFFFFFFFFFFF000uLL, 0x44456D4Du);
    v26 = v10;
    if ( !v10 )
    {
      v14 = -1073741670;
      goto LABEL_51;
    }
    if ( v21 == 1 )
    {
      if ( (unsigned int)Size >= 0x10000uLL )
      {
        if ( ((unsigned __int8)Src & 3) == 0 )
        {
          if ( (unsigned __int64)&Src[(unsigned int)Size] > 0x7FFFFFFF0000LL || &Src[(unsigned int)Size] < Src )
            MEMORY[0x7FFFFFFF0000] = 0;
          goto LABEL_44;
        }
      }
      else if ( ((unsigned __int8)Src & 3) == 0 )
      {
        goto LABEL_44;
      }
      ExRaiseDatatypeMisalignment();
    }
LABEL_44:
    memmove(v10, Src, (unsigned int)Size);
    v16 = v21;
    goto LABEL_45;
  }
  v14 = -1073741583;
LABEL_51:
  v9 = a2;
LABEL_52:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v14 >= 0 )
    *v9 = v27[0];
  if ( a9 )
    *a9 = HIDWORD(Size);
  return (unsigned int)v14;
}
