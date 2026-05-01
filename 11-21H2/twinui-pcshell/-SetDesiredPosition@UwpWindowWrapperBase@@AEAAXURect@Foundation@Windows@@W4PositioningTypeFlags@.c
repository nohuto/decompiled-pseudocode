/*
 * XREFs of ?SetDesiredPosition@UwpWindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18041702C
 * Callers:
 *     _lambda_193a5944257281e37e1c9f3232c0263d_::operator() @ 0x1804113EC (_lambda_193a5944257281e37e1c9f3232c0263d_--operator().c)
 *     _lambda_1b27ca76508dc44f7dfb2d159550644e_::operator() @ 0x180411514 (_lambda_1b27ca76508dc44f7dfb2d159550644e_--operator().c)
 *     _lambda_a3f8ac3eb9a33bfdf8e788a75d2a14e3_::operator() @ 0x1804124E4 (_lambda_a3f8ac3eb9a33bfdf8e788a75d2a14e3_--operator().c)
 *     _lambda_ae72453a80e0b268a47ed1149351e7af_::operator() @ 0x180412714 (_lambda_ae72453a80e0b268a47ed1149351e7af_--operator().c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800C27AC (-IsPPIEdition@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PushBoundsToWindow@UwpWindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x180415C18 (-PushBoundsToWindow@UwpWindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 */

__int64 __fastcall UwpWindowWrapperBase::SetDesiredPosition(__int64 a1, __int64 a2, char a3, __int64 a4)
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

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 272) + 224LL))(*(_QWORD *)(a1 + 272));
  *(_BYTE *)(a1 + 496) = 1;
  if ( (a3 & 1) != 0 )
  {
    v9 = *(float *)a2;
    if ( *(float *)(a1 + 480) == *(float *)a2 && *(float *)(a1 + 484) == *(float *)(a2 + 4) )
    {
      a3 &= ~1u;
    }
    else
    {
      *(_DWORD *)(a1 + 484) = *(_DWORD *)(a2 + 4);
      *(float *)(a1 + 480) = v9;
    }
  }
  v10 = 0;
  if ( (a3 & 2) != 0 )
  {
    v11 = *(float *)(a2 + 8);
    if ( *(float *)(a1 + 488) == v11 && *(float *)(a1 + 492) == *(float *)(a2 + 12) )
    {
      if ( !IsPPIEdition() )
        a3 &= ~2u;
    }
    else
    {
      v10 = 1;
      *(_DWORD *)(a1 + 492) = *(_DWORD *)(a2 + 12);
      *(float *)(a1 + 488) = v11;
    }
  }
  v12 = (_OWORD *)(a1 + 504);
  result = *(unsigned int *)(a1 + 544);
  v18 = *(_DWORD *)(a1 + 544);
  v14 = *(_OWORD *)(a1 + 520);
  v16[0] = *(_OWORD *)(a1 + 504);
  v17 = *(_QWORD *)(a1 + 536);
  v16[1] = v14;
  if ( a4 )
  {
    *v12 = *(_OWORD *)a4;
    *(_OWORD *)(a1 + 520) = *(_OWORD *)(a4 + 16);
    *(_QWORD *)(a1 + 536) = *(_QWORD *)(a4 + 32);
    *(_DWORD *)(a1 + 544) = *(_DWORD *)(a4 + 40);
    result = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)a1 + 160LL))(a1, v16);
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
    (*(void (__fastcall **)(__int64, __int64, _OWORD *))(*(_QWORD *)a1 + 168LL))(a1, v8, v12);
    result = UwpWindowWrapperBase::PushBoundsToWindow(a1, a3);
    if ( ((a3 & 2) != 0 || v15) && !*(_BYTE *)(a1 + 564) )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 224LL))(a1);
  }
  return result;
}
