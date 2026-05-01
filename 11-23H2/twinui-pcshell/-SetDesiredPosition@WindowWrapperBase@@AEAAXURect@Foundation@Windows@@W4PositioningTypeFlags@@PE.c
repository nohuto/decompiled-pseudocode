/*
 * XREFs of ?SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1802D90CE
 * Callers:
 *     _lambda_532033d5f85a25734111ea1682d58830_::operator() @ 0x1804E69B0 (_lambda_532033d5f85a25734111ea1682d58830_--operator().c)
 *     _lambda_71fd42c69aa62f038d9e5026256b1616_::operator() @ 0x1804E6DEC (_lambda_71fd42c69aa62f038d9e5026256b1616_--operator().c)
 *     _lambda_b125c7ae5c5ec46ca3af9b42a20ce061_::operator() @ 0x1804E79D8 (_lambda_b125c7ae5c5ec46ca3af9b42a20ce061_--operator().c)
 *     _lambda_ffe5abdc96bff0e72534bc001af731ee_::operator() @ 0x1804E8DB0 (_lambda_ffe5abdc96bff0e72534bc001af731ee_--operator().c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18009FF88 (-IsPPIEdition@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x1804EAFA8 (-PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 */

__int64 __fastcall WindowWrapperBase::SetDesiredPosition(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v8; // rdx
  float v9; // xmm1_4
  char v10; // bp
  float v11; // xmm1_4
  _OWORD *v12; // r8
  __int64 result; // rax
  __int128 v14; // xmm1
  char v15; // si
  _OWORD v16[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v17; // [rsp+40h] [rbp-38h]
  int v18; // [rsp+48h] [rbp-30h]

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 216LL))(*(_QWORD *)(a1 + 280));
  *(_BYTE *)(a1 + 504) = 1;
  if ( (a3 & 1) != 0 )
  {
    v9 = *(float *)a2;
    if ( *(float *)(a1 + 488) == *(float *)a2 && *(float *)(a1 + 492) == *(float *)(a2 + 4) )
    {
      a3 &= ~1u;
    }
    else
    {
      *(_DWORD *)(a1 + 492) = *(_DWORD *)(a2 + 4);
      *(float *)(a1 + 488) = v9;
    }
  }
  v10 = 0;
  if ( (a3 & 2) != 0 )
  {
    v11 = *(float *)(a2 + 8);
    if ( *(float *)(a1 + 496) == v11 && *(float *)(a1 + 500) == *(float *)(a2 + 12) )
    {
      if ( !IsPPIEdition() )
        a3 &= ~2u;
    }
    else
    {
      v10 = 1;
      *(_DWORD *)(a1 + 500) = *(_DWORD *)(a2 + 12);
      *(float *)(a1 + 496) = v11;
    }
  }
  v12 = (_OWORD *)(a1 + 512);
  result = *(unsigned int *)(a1 + 552);
  v18 = *(_DWORD *)(a1 + 552);
  v14 = *(_OWORD *)(a1 + 528);
  v16[0] = *(_OWORD *)(a1 + 512);
  v17 = *(_QWORD *)(a1 + 544);
  v16[1] = v14;
  if ( a4 )
  {
    *v12 = *(_OWORD *)a4;
    *(_OWORD *)(a1 + 528) = *(_OWORD *)(a4 + 16);
    *(_QWORD *)(a1 + 544) = *(_QWORD *)(a4 + 32);
    *(_DWORD *)(a1 + 552) = *(_DWORD *)(a4 + 40);
    result = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)a1 + 152LL))(a1, v16);
    v15 = result;
  }
  else
  {
    v15 = 0;
  }
  if ( (a3 & 3) != 0 || v15 )
  {
    LOBYTE(v12) = v15;
    LOBYTE(v8) = v10;
    (*(void (__fastcall **)(__int64, __int64, _OWORD *))(*(_QWORD *)a1 + 160LL))(a1, v8, v12);
    result = WindowWrapperBase::PushBoundsToWindow(a1, a3);
    if ( ((a3 & 2) != 0 || v15) && !*(_BYTE *)(a1 + 572) )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 208LL))(a1);
  }
  return result;
}
