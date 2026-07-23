/*
 * XREFs of sub_14085BC40 @ 0x14085BC40
 * Callers:
 *     sub_14096E4D8 @ 0x14096E4D8 (sub_14096E4D8.c)
 *     sub_1409B32F0 @ 0x1409B32F0 (sub_1409B32F0.c)
 *     sub_140B28514 @ 0x140B28514 (sub_140B28514.c)
 * Callees:
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     sub_1407DE8D0 @ 0x1407DE8D0 (sub_1407DE8D0.c)
 *     sub_14085BD34 @ 0x14085BD34 (sub_14085BD34.c)
 */

__int64 __fastcall sub_14085BC40(ULONG_PTR a1, HANDLE *a2, int a3, int a4, KPROCESSOR_MODE PreviousMode, int a6)
{
  int v10; // r8d
  HANDLE *p_Handle; // r14
  int v12; // edi
  __int64 v14; // rcx
  __int64 v15; // [rsp+20h] [rbp-68h]
  HANDLE Handle; // [rsp+48h] [rbp-40h] BYREF
  void *v17; // [rsp+50h] [rbp-38h] BYREF
  __int64 v18[3]; // [rsp+58h] [rbp-30h] BYREF

  v17 = 0LL;
  Handle = 0LL;
  v18[0] = 0LL;
  if ( !PreviousMode )
    goto LABEL_22;
  v14 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
    v14 = (__int64)a2;
  *(_QWORD *)v14 = *(_QWORD *)v14;
  if ( a6 )
  {
    v12 = -1073741811;
  }
  else
  {
LABEL_22:
    if ( SeSinglePrivilegeCheck(stru_140D3CA80, PreviousMode) )
    {
      if ( !a1 || (v12 = sub_1407DE8D0(a1, 2, PreviousMode, 0x70437350u, v18), v12 >= 0) )
      {
        p_Handle = &Handle;
        if ( (a6 & 1) != 0 )
          p_Handle = 0LL;
        LODWORD(v15) = a6;
        LOBYTE(v10) = PreviousMode;
        v12 = sub_14085BD34(a4, a3, v10, v18[0], v15, (__int64)&v17, (__int64)p_Handle);
        if ( v12 >= 0 )
        {
          if ( p_Handle )
          {
            sub_1403606C4((__int64)v17);
            *a2 = Handle;
          }
          else
          {
            qword_140D06C40 = v17;
          }
        }
      }
    }
    else
    {
      v12 = -1073741727;
    }
  }
  if ( v18[0] )
    sub_1403606C4(v18[0]);
  return (unsigned int)v12;
}
