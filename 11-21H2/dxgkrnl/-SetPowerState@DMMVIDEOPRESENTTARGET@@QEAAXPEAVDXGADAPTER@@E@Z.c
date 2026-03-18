/*
 * XREFs of ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C0014AB4
 * Callers:
 *     ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C0014AB4 (-SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 *     ?RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z @ 0x1C01C8F5C (-RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z @ 0x1C01C8FF4 (-SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z.c)
 * Callees:
 *     ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C0014AB4 (-SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 *     ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x1C0014C64 (-SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ?SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z @ 0x1C0024620 (-SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::SetPowerState(
        DMMVIDEOPRESENTTARGET *this,
        struct DXGADAPTER *a2,
        unsigned __int8 a3)
{
  unsigned __int8 v4; // di
  _QWORD **v5; // rcx
  _QWORD *v7; // rax
  unsigned int v8; // edx
  char v9; // al
  DMMVIDEOPRESENTTARGET *v10; // rcx
  char *v11; // rsi
  char *i; // rbx

  v4 = a3;
  v5 = (_QWORD **)((char *)this + 440);
  v7 = *v5;
  if ( !a3 )
  {
    while ( v7 != v5 )
    {
      if ( *((_BYTE *)v7 - 52) )
      {
        v4 = 1;
        break;
      }
      v7 = (_QWORD *)*v7;
    }
  }
  v8 = *((_DWORD *)this + 100);
  if ( v8 != -1 )
  {
    v9 = *((_BYTE *)this + 404);
    if ( v4 )
    {
      if ( !v9 )
        DXGADAPTER::SetPowerComponentActiveCBInternal(a2, v8, 1u, 0);
    }
    else if ( v9 )
    {
      DXGADAPTER::SetPowerComponentIdleCBInternal(a2, v8, 0);
    }
  }
  v10 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)this + 59);
  *((_BYTE *)this + 404) = v4;
  if ( v10 )
    DMMVIDEOPRESENTTARGET::SetPowerState(v10, a2, v4);
  v11 = (char *)this + 480;
  for ( i = (char *)*((_QWORD *)this + 60); i != v11; i = *(char **)i )
    DMMVIDEOPRESENTTARGET::SetPowerState((DMMVIDEOPRESENTTARGET *)(i - 496), a2, v4);
}
