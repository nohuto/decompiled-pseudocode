/*
 * XREFs of RmConnectProcessManager @ 0x18001C300
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001074 @ 0x180001074 (sub_180001074.c)
 *     sub_1800010E0 @ 0x1800010E0 (sub_1800010E0.c)
 *     sub_1800011A0 @ 0x1800011A0 (sub_1800011A0.c)
 *     sub_1800065B0 @ 0x1800065B0 (sub_1800065B0.c)
 *     sub_18001233C @ 0x18001233C (sub_18001233C.c)
 *     sub_180012B40 @ 0x180012B40 (sub_180012B40.c)
 *     sub_1800133F4 @ 0x1800133F4 (sub_1800133F4.c)
 *     RmDisconnectProcessManager @ 0x18001C400 (RmDisconnectProcessManager.c)
 */

__int64 __fastcall RmConnectProcessManager(__int64 a1, __int64 *a2)
{
  int v4; // ebx
  _QWORD *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v11; // [rsp+40h] [rbp+8h] BYREF

  if ( (unsigned int)dword_180032000 > 4 && sub_1800010E0((__int64)&dword_180032000, 2LL) )
    sub_1800011A0((__int64)&dword_180032000, byte_18002A79D);
  if ( a1 )
  {
    v5 = sub_1800065B0(0x70uLL);
    v6 = (__int64)v5;
    if ( v5 )
    {
      sub_180012B40(a1, v5);
      v4 = sub_18001233C(v6);
      if ( v4 < 0 || (v4 = sub_1800133F4(v6), v4 < 0) )
      {
        RmDisconnectProcessManager(v6);
      }
      else
      {
        *a2 = v6;
        v4 = 0;
      }
    }
    else
    {
      v4 = -1073741801;
    }
  }
  else
  {
    v4 = -1073741585;
  }
  if ( (unsigned int)dword_180032000 > 4 && sub_1800010E0((__int64)&dword_180032000, 3LL) )
  {
    v11 = v4;
    sub_180001074(v7, (int)&unk_18002A778, v8, v9, (__int64)&v11);
  }
  return (unsigned int)v4;
}
