/*
 * XREFs of sub_1409A4620 @ 0x1409A4620
 * Callers:
 *     sub_1407F2D00 @ 0x1407F2D00 (sub_1407F2D00.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     sub_1405DC12C @ 0x1405DC12C (sub_1405DC12C.c)
 *     sub_1409A5200 @ 0x1409A5200 (sub_1409A5200.c)
 *     sub_1409A6030 @ 0x1409A6030 (sub_1409A6030.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 *     sub_1409A9718 @ 0x1409A9718 (sub_1409A9718.c)
 *     sub_1409A98A4 @ 0x1409A98A4 (sub_1409A98A4.c)
 */

__int64 __fastcall sub_1409A4620(unsigned int a1, unsigned int a2, char a3)
{
  unsigned int v4; // ebp
  bool v6; // si
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rdi
  unsigned int v10; // ebx
  __int64 v11; // r8
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  int v17; // eax
  unsigned int ExplicitScope; // [rsp+70h] [rbp+8h] BYREF
  char Buffer; // [rsp+80h] [rbp+18h] BYREF
  __int64 v20; // [rsp+88h] [rbp+20h] BYREF

  ExplicitScope = a1;
  v20 = 0LL;
  v4 = 0;
  Buffer = 0;
  v6 = 0;
  v7 = sub_1409A5200(&v20, a1);
  v9 = v20;
  v10 = v7;
  if ( v7 < 0 )
  {
    v11 = (unsigned int)v7;
    v12 = 3849LL;
LABEL_3:
    sub_1409A8628("TtmNotifySessionDisplayRequiredChange", v12, v11, 0xFFFFFFFFLL);
    goto LABEL_11;
  }
  LOBYTE(v8) = a3;
  sub_1409A6030(v20, a2, v8);
  v13 = *(_DWORD *)(v9 + 20);
  if ( !a3 )
  {
    if ( !v13 )
    {
      v10 = -1073741811;
      v12 = 3881LL;
      v11 = 3221225485LL;
      goto LABEL_3;
    }
    v14 = v13 - 1;
    *(_DWORD *)(v9 + 20) = v14;
    v6 = v14 == 0;
LABEL_8:
    v10 = 0;
    if ( !v6 )
      goto LABEL_11;
    goto LABEL_9;
  }
  if ( v13 == -1 )
  {
    v10 = -1073741675;
    v12 = 3901LL;
    v11 = 3221225621LL;
    goto LABEL_3;
  }
  v17 = v13 + 1;
  *(_DWORD *)(v9 + 20) = v17;
  if ( v17 != 1 )
    goto LABEL_8;
  v6 = 1;
LABEL_9:
  v10 = 0;
  if ( *(_DWORD *)(v9 + 20) )
    Buffer = 1;
LABEL_11:
  if ( v9 )
  {
    v4 = *(_DWORD *)(v9 + 20);
    ExReleaseResourceLite(&stru_140C1C020);
    KeLeaveCriticalRegion();
  }
  if ( v6 )
  {
    ZwUpdateWnfStateData(&stru_140037770, &Buffer, 1u, 0LL, &ExplicitScope, 0, 0);
    LOBYTE(v15) = Buffer;
    sub_1405DC12C(v15);
  }
  if ( a3 )
    return sub_1409A98A4(ExplicitScope, v4, v10);
  else
    return sub_1409A9718(ExplicitScope, v4, v10);
}
