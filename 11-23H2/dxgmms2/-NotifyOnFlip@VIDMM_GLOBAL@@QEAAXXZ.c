/*
 * XREFs of ?NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0014EEC
 * Callers:
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C00148F0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0019BBC (McTemplateK0q_EtwWriteTransfer.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyOnFlip(VIDMM_GLOBAL *this)
{
  int v2; // ecx
  unsigned int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // r8
  REGHANDLE EtwHandle; // rax
  bool v7; // zf

  v2 = *((_DWORD *)this + 1976);
  if ( *((_QWORD *)this + 987) > (unsigned __int64)qword_1C00763D0 )
  {
    v3 = v2 + dword_1C00763DC;
    *((_DWORD *)this + 1976) = v2 + dword_1C00763DC;
    if ( v3 > dword_1C00763D8
      && MEMORY[0xFFFFF78000000014] - *((_QWORD *)this + 989) > (unsigned __int64)qword_1C00763E0 )
    {
      if ( (unsigned __int8)WdDiagIsTracingEnabled(&Dxgk_ExcessiveMemoryTransfer) )
      {
        EtwHandle = WdDiagGetEtwHandle();
        if ( EtwHandle )
          EtwWrite(EtwHandle, &Dxgk_ExcessiveMemoryTransfer, 0LL, 0, 0LL);
      }
      v7 = bTracingEnabled == 0;
      *((_QWORD *)this + 989) = MEMORY[0xFFFFF78000000014];
      *((_DWORD *)this + 1976) = 0;
      if ( !v7 && (byte_1C0076981 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v4, &EventPerformanceWarning, v5, 5LL);
    }
  }
  else if ( v2 )
  {
    *((_DWORD *)this + 1976) = v2 - 1;
  }
  _InterlockedExchange64((volatile __int64 *)this + 987, 0LL);
}
