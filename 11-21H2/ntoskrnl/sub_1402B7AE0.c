/*
 * XREFs of sub_1402B7AE0 @ 0x1402B7AE0
 * Callers:
 *     ntoskrnl_6 @ 0x14029B310 (ntoskrnl_6.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     sub_1402EFA40 @ 0x1402EFA40 (sub_1402EFA40.c)
 *     sub_140344A30 @ 0x140344A30 (sub_140344A30.c)
 *     sub_14035B110 @ 0x14035B110 (sub_14035B110.c)
 *     sub_14035C3FC @ 0x14035C3FC (sub_14035C3FC.c)
 *     sub_14035CAD8 @ 0x14035CAD8 (sub_14035CAD8.c)
 * Callees:
 *     sub_140210224 @ 0x140210224 (sub_140210224.c)
 *     sub_1402103E0 @ 0x1402103E0 (sub_1402103E0.c)
 *     sub_1402B4AE0 @ 0x1402B4AE0 (sub_1402B4AE0.c)
 *     sub_14034412C @ 0x14034412C (sub_14034412C.c)
 */

__int64 __fastcall sub_1402B7AE0(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si
  __int64 result; // rax
  unsigned int v7; // eax
  __int64 v8; // rdx
  unsigned int v9; // esi
  signed int v10; // ecx
  __int64 v11; // rdx
  char v12; // r9

  v3 = a3;
  if ( a2 )
  {
    v7 = *(char *)(a2 + 195);
    if ( *(_BYTE *)(a2 + 195) == 31 )
    {
      return 0LL;
    }
    else
    {
      v8 = *(_QWORD *)(a2 + 104);
      v9 = v7 + 1;
      if ( (a3 & 2) != 0 )
        v9 = v7;
      if ( !v8
        || (v11 = *(unsigned int *)(a1 + 216) + v8) == 0
        || ((struct _KPRCB *)a1 == KeGetCurrentPrcb() || a2 != *(_QWORD *)(a1 + 8) ? (v12 = 1) : (v12 = 0),
            !(unsigned int)sub_1402103E0(a2, v11, a3, v12, 0LL)) )
      {
        v10 = v9;
        return sub_1402B4AE0(v10, a1, a3);
      }
      return sub_140210224(a1, a2, v9);
    }
  }
  else
  {
    result = sub_1402B4AE0(1, a1, a3);
    if ( !result )
    {
      result = sub_14034412C(a1);
      if ( !result && (v3 & 1) == 0 )
      {
        v10 = 0;
        return sub_1402B4AE0(v10, a1, a3);
      }
    }
  }
  return result;
}
