/*
 * XREFs of HUBDTX_SetSelUsingControlTransfer @ 0x1C002AA6C
 * Callers:
 *     HUBDSM_SettingSEL @ 0x1C0022920 (HUBDSM_SettingSEL.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C000B3FC (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C002FA0C (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBDTX_SetSelUsingControlTransfer(__int64 *a1)
{
  __int64 v1; // r9
  _BYTE *v2; // r14
  unsigned __int16 v3; // r8
  int v5; // esi
  unsigned __int16 v6; // dx
  __int64 v7; // r10
  unsigned __int16 v8; // di
  unsigned __int16 v9; // r8
  int v10; // eax
  unsigned int v11; // edx
  char v12; // al
  __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // [rsp+28h] [rbp-30h]

  v1 = *a1;
  v2 = (char *)a1 + 2196;
  v3 = *((_WORD *)a1 + 1096);
  v5 = *(unsigned __int8 *)(*a1 + 240);
  if ( v3 <= *(_WORD *)(*a1 + 2474) )
    v3 = *(_WORD *)(*a1 + 2474);
  v6 = *(_WORD *)(v1 + 2478) + (1000 * (v5 - *(unsigned __int8 *)(v1 + 2480)) + 500) / 1000;
  if ( v3 <= v6 )
  {
    *((_BYTE *)a1 + 2197) = v6;
    v7 = v1;
  }
  else
  {
    *((_BYTE *)a1 + 2197) = v3;
    _InterlockedOr((volatile signed __int32 *)a1 + 554, 1u);
    v7 = *a1;
  }
  v8 = *((_WORD *)a1 + 1097);
  *((_WORD *)a1 + 1101) = v3 + *(_WORD *)(v1 + 2486) + ((unsigned int)*(unsigned __int8 *)(v7 + 1187) + 5) / 0xA;
  if ( v8 <= *(_WORD *)(v1 + 2476) )
    v8 = *(_WORD *)(v1 + 2476);
  v9 = *(_WORD *)(v1 + 2482) + (__int16)(1000 * (v5 - *(unsigned __int8 *)(v1 + 2484)) + 500) / 1000;
  if ( v8 <= v9 )
  {
    *((_WORD *)a1 + 1100) = v9;
  }
  else
  {
    *((_WORD *)a1 + 1100) = v8;
    _InterlockedOr((volatile signed __int32 *)a1 + 554, 2u);
    v7 = *a1;
    v9 = *((_WORD *)a1 + 1100);
  }
  v10 = *((unsigned __int16 *)a1 + 1291);
  *((_WORD *)a1 + 1102) = v8 + *(_WORD *)(v1 + 2488) + ((unsigned int)*(unsigned __int8 *)(v7 + 1187) + 5) / 0xA;
  v11 = *((unsigned __int16 *)a1 + 1290);
  if ( (_BYTE)v5 )
    v11 = (800 * v5 + 2200 + (v5 + 1) * (v10 + v11)) / 0x3E8;
  else
    LOWORD(v11) = v10 + v11;
  *v2 = v11 + *((_BYTE *)a1 + 2197) + 5;
  *((_WORD *)a1 + 1099) = v11 + v9 + 5;
  v12 = *((_BYTE *)a1 + 1512);
  *((_BYTE *)a1 + 400) &= 0x1Cu;
  v13 = a1[3];
  *((_BYTE *)a1 + 401) = 48;
  *((_DWORD *)a1 + 101) = 393216;
  *((_WORD *)a1 + 201) = 0;
  result = HUBMISC_ControlTransfer(
             v7,
             v13,
             (_DWORD)a1,
             (int)a1 + 248,
             (__int64)HUBDTX_ControlTransferComplete,
             (__int64)v2,
             6,
             1,
             v12);
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v15) = result;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432),
        2u,
        5u,
        0x67u,
        (__int64)&WPP_54051f9f773a359161ccd48cdf39bc09_Traceguids,
        v15);
    }
    return HUBSM_AddEvent((__int64)(a1 + 63), 4004);
  }
  return result;
}
