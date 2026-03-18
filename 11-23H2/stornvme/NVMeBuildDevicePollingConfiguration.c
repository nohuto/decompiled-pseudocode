/*
 * XREFs of NVMeBuildDevicePollingConfiguration @ 0x1C001C490
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0002298 (GetSrbExtension.c)
 *     Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage @ 0x1C0004648 (Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage.c)
 */

char __fastcall NVMeBuildDevicePollingConfiguration(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v4; // rdx
  _DWORD *v5; // r8
  __int64 v6; // rsi
  __int64 v7; // rdi
  unsigned __int16 v8; // dx
  bool v9; // zf
  int v10; // eax
  int v11; // eax

  SrbExtension = GetSrbExtension(a2);
  v6 = SrbExtension;
  if ( v5 )
  {
    LOBYTE(SrbExtension) = *(_BYTE *)(v4 + 3);
    if ( (_BYTE)SrbExtension == 1 )
    {
      v7 = *(_QWORD *)(a1 + 1936);
      if ( *v5 == 1313882949 )
      {
        *(_WORD *)(a1 + 4052) = *(_WORD *)v7;
        LODWORD(SrbExtension) = Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage();
        v8 = *(_WORD *)(a1 + 4052);
        v9 = (_DWORD)SrbExtension == 0;
        LOBYTE(SrbExtension) = 0;
        if ( v9 )
        {
          if ( v8 == 256 )
          {
            v11 = *(unsigned __int16 *)(v7 + 2);
            *(_DWORD *)(a1 + 4056) = v11;
            if ( v11 )
              *(_BYTE *)(a1 + 4032) = 1;
            *(_DWORD *)(a1 + 4060) = *(_DWORD *)(v7 + 4);
            LODWORD(SrbExtension) = *(_DWORD *)(v7 + 8);
            *(_DWORD *)(a1 + 4064) = SrbExtension;
          }
        }
        else if ( v8 >= 0x100u )
        {
          v10 = *(unsigned __int16 *)(v7 + 2);
          *(_DWORD *)(a1 + 4056) = v10;
          if ( v10 )
            *(_BYTE *)(a1 + 4032) = 1;
          *(_DWORD *)(a1 + 4060) = *(_DWORD *)(v7 + 4);
          *(_DWORD *)(a1 + 4064) = *(_DWORD *)(v7 + 8);
          LOBYTE(SrbExtension) = 1;
          if ( v8 >= 0x101u )
          {
            *(_WORD *)(a1 + 4068) = *(_WORD *)(v7 + 12);
            LOWORD(SrbExtension) = *(_WORD *)(v7 + 14);
            *(_WORD *)(a1 + 4070) = SrbExtension;
          }
        }
      }
    }
  }
  *(_BYTE *)(v6 + 4253) |= 8u;
  return SrbExtension;
}
