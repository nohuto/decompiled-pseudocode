/*
 * XREFs of ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x1800AF840
 * Callers:
 *     ?HandleHomeGesture@MPCHandProcessor@@AEAA_NPEAULegacyInputInfo@@@Z @ 0x1800A70B0 (-HandleHomeGesture@MPCHandProcessor@@AEAA_NPEAULegacyInputInfo@@@Z.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x1800AF640 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C0FA0 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C21EC (-UpdatePoint@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C33F4 (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801C6360 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?ResetState@MPCButtonHoldHelper@@QEAAXXZ @ 0x1800AF824 (-ResetState@MPCButtonHoldHelper@@QEAAXXZ.c)
 */

void __fastcall MPCButtonHoldHelper::UpdateState(MPCButtonHoldHelper *this, char a2, __int64 a3)
{
  char v3; // al
  char v4; // r9
  char v5; // al
  bool v6; // zf

  v3 = *((_BYTE *)this + 8);
  *(_DWORD *)((char *)this + 10) = 0;
  v4 = a2;
  *((_QWORD *)this + 4) = a3;
  if ( a2 )
  {
    if ( v3 )
    {
      if ( !*((_BYTE *)this + 9) && (unsigned __int64)(a3 - *((_QWORD *)this + 2)) > *((_QWORD *)this + 3) )
      {
        *((_BYTE *)this + 13) = 1;
        *((_BYTE *)this + 9) = 1;
      }
    }
    else
    {
      *((_QWORD *)this + 2) = a3;
      *((_BYTE *)this + 10) = 1;
    }
  }
  else
  {
    if ( v3 )
    {
      v5 = *((_BYTE *)this + 11);
      v6 = *((_BYTE *)this + 9) == 0;
      *((_BYTE *)this + 12) = 1;
      if ( v6 )
        v5 = 1;
      *((_BYTE *)this + 11) = v5;
    }
    MPCButtonHoldHelper::ResetState(this);
  }
  *((_BYTE *)this + 8) = v4;
}
