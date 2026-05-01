/*
 * XREFs of ?IsPointerDeviceSupportedOnMonitor@CVirtualTouchpadExperienceManager@@CA_NPEAUHMONITOR__@@W4tagPOINTER_DEVICE_TYPE@@@Z @ 0x18037E48C
 * Callers:
 *     ?ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJAEBUTouchpadPositionAnchorInternal@@_N@Z @ 0x18037D278 (-ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJAEBUTouchpadPositionAnchorInternal@@.c)
 *     std::_Func_impl_no_alloc__lambda_6e1b05e5ec2a7c8ac356138a45d8d798__bool_HMONITOR_____::_Do_call @ 0x180380780 (std--_Func_impl_no_alloc__lambda_6e1b05e5ec2a7c8ac356138a45d8d798__bool_HMONITOR_____--_Do_call.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800E7D10 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1801896CC (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x180189A54 (--_U@YAPEAX_K@Z.c)
 */

char __fastcall CVirtualTouchpadExperienceManager::IsPointerDeviceSupportedOnMonitor(__int64 a1)
{
  char v2; // bl
  signed int Error; // eax
  char *v4; // rdi
  unsigned int v5; // ecx
  __int64 v6; // rdx
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v8 = 0;
  if ( (unsigned int)GetPointerDevices(&v8, 0LL)
    || (Error = ResultFromKnownLastError(), (int)(Error + 0x80000000) < 0)
    || Error == -2147024774 )
  {
    if ( v8 )
    {
      v4 = (char *)operator new[](saturated_mul(v8, 0x438uLL));
      if ( (unsigned int)GetPointerDevices(&v8, v4) || ResultFromKnownLastError() >= 0 )
      {
        v5 = 0;
        if ( v8 )
        {
          while ( 1 )
          {
            v6 = 1080LL * v5;
            if ( *(_QWORD *)&v4[v6 + 24] == a1 && *(_DWORD *)&v4[v6 + 16] == 3 )
              break;
            if ( ++v5 >= v8 )
              goto LABEL_13;
          }
          v2 = 1;
        }
      }
LABEL_13:
      operator delete[](v4);
    }
  }
  return v2;
}
