/*
 * XREFs of PerfControlHwpHv @ 0x1C0007970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PerfControlHwpHv(__int64 *a1, __int64 *a2, char a3, char a4)
{
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF

  v11 = 0LL;
  if ( a4 || a3 )
  {
    if ( !*((_BYTE *)a1 + 137) || a4 )
    {
      ((void (__fastcall *)(_QWORD, _QWORD, __int64 *))qword_1C001F3D0)(
        *(unsigned int *)(*a1 + 84),
        *((unsigned int *)a1 + 39),
        &v11);
      *((_BYTE *)a1 + 137) = 1;
    }
    else
    {
      v11 = a1[22];
    }
    v6 = *a2;
    v7 = *((unsigned int *)a1 + 39);
    v8 = a1[23];
    HIDWORD(v11) = HIDWORD(v11) & 0xFFFFFBFF | (*((_BYTE *)a2 + 37) != 0 ? 0x400 : 0);
    v9 = *a1;
    v11 = v11 & ~v8 | v8 & v6;
    ((void (__fastcall *)(_QWORD, __int64))qword_1C001F3D8)(*(unsigned int *)(v9 + 84), v7);
    result = v11;
    a1[22] = v11;
  }
  return result;
}
