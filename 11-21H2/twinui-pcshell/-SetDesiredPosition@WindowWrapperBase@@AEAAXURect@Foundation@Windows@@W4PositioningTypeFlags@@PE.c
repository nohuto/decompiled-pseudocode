/*
 * XREFs of ?SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1800C2B08
 * Callers:
 *     _lambda_2324e29893a6d6f79c6a982ef2ca085a_::operator() @ 0x1800C2A48 (_lambda_2324e29893a6d6f79c6a982ef2ca085a_--operator().c)
 *     _lambda_850467420bd2b5d4bab64ca35268b252_::operator() @ 0x18040996C (_lambda_850467420bd2b5d4bab64ca35268b252_--operator().c)
 *     _lambda_b121a6b42ae2c39195a2604db960e4d4_::operator() @ 0x180409E80 (_lambda_b121a6b42ae2c39195a2604db960e4d4_--operator().c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800C27AC (-IsPPIEdition@@YA_NXZ.c)
 *     ?PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x1800C3490 (-PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
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
