/*
 * XREFs of sub_1406EEF3C @ 0x1406EEF3C
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 *     sub_1409E8E6C @ 0x1409E8E6C (sub_1409E8E6C.c)
 * Callees:
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1406E0450 @ 0x1406E0450 (sub_1406E0450.c)
 *     sub_1406EF020 @ 0x1406EF020 (sub_1406EF020.c)
 *     sub_1406EF140 @ 0x1406EF140 (sub_1406EF140.c)
 *     sub_1406EF280 @ 0x1406EF280 (sub_1406EF280.c)
 *     sub_14079435C @ 0x14079435C (sub_14079435C.c)
 *     sub_1407981E8 @ 0x1407981E8 (sub_1407981E8.c)
 */

__int64 __fastcall sub_1406EEF3C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r9
  struct _KTHREAD *CurrentThread; // rax
  int v8; // edi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v12 = 0LL;
  result = sub_1406EF140(a2, a2, a3, a1);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v8 = sub_1406EF020(v6, v5, &v12);
    if ( v8 < 0 )
    {
LABEL_8:
      sub_1402F9540((__int64)KeGetCurrentThread());
      return (unsigned int)v8;
    }
    v9 = v12;
    v8 = sub_14079435C(1u);
    if ( v8 >= 0 )
    {
      if ( (*(_DWORD *)(v9 + 816) & 0x4000) != 0 )
      {
        v8 = sub_1406E0450(*((_QWORD *)KeGetCurrentThread() + 23), *((_BYTE *)KeGetCurrentThread() + 562));
        if ( v8 < 0 )
        {
          v11 = v12;
          goto LABEL_7;
        }
        v9 = v12;
      }
      v8 = sub_1406EF280(a2, v9);
    }
    v11 = v9;
LABEL_7:
    LOBYTE(v10) = 1;
    sub_1407981E8(v11, v10);
    goto LABEL_8;
  }
  return result;
}
