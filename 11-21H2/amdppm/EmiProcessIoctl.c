/*
 * XREFs of EmiProcessIoctl @ 0x1C0038910
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C000A36C (RtlStringCchPrintfW.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000BE00 (memset.c)
 */

__int64 __fastcall EmiProcessIoctl(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v5; // edi
  __int64 v6; // r15
  unsigned int v7; // r14d
  __int64 v8; // rax
  __int64 v9; // r13
  int v10; // ebx
  NTSTATUS v11; // esi
  unsigned int v12; // ebx
  unsigned int v13; // r13d
  char *v14; // r14
  unsigned int v15; // r13d
  unsigned __int64 *v16; // rbx
  unsigned int v17; // eax
  unsigned int v18; // ebx
  unsigned int v19; // r12d
  _DWORD *v20; // rbx
  unsigned int v21; // ecx
  __int16 v22; // ax
  wchar_t *v23; // rbx
  unsigned int v24; // r15d
  unsigned int v25; // eax
  __int64 v27; // [rsp+20h] [rbp-40h]
  __int64 v28; // [rsp+30h] [rbp-30h]
  unsigned int v29; // [rsp+30h] [rbp-30h]
  void *v30; // [rsp+38h] [rbp-28h] BYREF
  __int64 v31; // [rsp+40h] [rbp-20h] BYREF
  __int64 v32; // [rsp+48h] [rbp-18h] BYREF
  char *v33; // [rsp+50h] [rbp-10h]
  unsigned int v35; // [rsp+B0h] [rbp+50h]

  v5 = 0;
  v6 = a2;
  v31 = 0LL;
  v32 = 0LL;
  v7 = 0;
  v30 = 0LL;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v8,
         off_1C0011018);
  v28 = v9;
  if ( a5 == 2244608 )
  {
    v10 = 2;
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, void **, _QWORD))(WdfFunctions_01015 + 2160))(
            WdfDriverGlobals,
            v6,
            2LL,
            &v30,
            0LL);
    if ( v11 < 0 )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 2120))(
               WdfDriverGlobals,
               v6,
               (unsigned int)v11,
               v7);
    *(_WORD *)v30 = 2;
    goto LABEL_20;
  }
  v10 = 4;
  switch ( a5 )
  {
    case 2244612:
      v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, void **, _QWORD))(WdfFunctions_01015 + 2160))(
              WdfDriverGlobals,
              v6,
              4LL,
              &v30,
              0LL);
      if ( v11 < 0 )
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 2120))(
                 WdfDriverGlobals,
                 v6,
                 (unsigned int)v11,
                 v7);
      *(_DWORD *)v30 = 106 * (unsigned __int16)EmiChannelCount + 68;
LABEL_20:
      v7 = v10;
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 2120))(
               WdfDriverGlobals,
               v6,
               (unsigned int)v11,
               v7);
    case 2244616:
      v18 = 106 * (unsigned __int16)EmiChannelCount + 68;
      v19 = v18;
      v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, void **, _QWORD))(WdfFunctions_01015 + 2160))(
              WdfDriverGlobals,
              v6,
              v18,
              &v30,
              0LL);
      if ( v11 >= 0 )
      {
        v7 = v18;
        v35 = v18;
        v20 = v30;
        memset(v30, 0, v19);
        v21 = 0;
        *(_OWORD *)v20 = *(_OWORD *)L"Microsoft";
        v20[4] = *(_DWORD *)L"t";
        *((_QWORD *)v20 + 4) = 0x4D00500050LL;
        v22 = EmiChannelCount;
        *((_WORD *)v20 + 33) = EmiChannelCount;
        *((_WORD *)v20 + 32) = 1;
        v23 = (wchar_t *)(v20 + 17);
        if ( v22 )
        {
          v24 = 0;
          do
          {
            v29 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64))qword_1C00116E0)(v9, v21, 0x800000000000LL);
            ((void (__fastcall *)(_QWORD, __int64 *, __int64 *))qword_1C00116F0)(v29, &v32, &v31);
            LODWORD(v27) = *(_DWORD *)(*(_QWORD *)(v9 + 1080) + 32LL);
            v11 = RtlStringCchPrintfW(v23 + 3, 0x64uLL, L"%s_Package%d_%s", v32, v27, v31);
            v25 = (unsigned __int16)EmiChannelCount;
            v21 = v29 + 1;
            ++v24;
            *(_DWORD *)v23 = 0;
            v23[2] = 100;
            v23 += 53;
          }
          while ( v24 < v25 );
          goto LABEL_15;
        }
      }
      break;
    case 2244620:
      v12 = 16 * (unsigned __int16)EmiChannelCount;
      v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, void **, _QWORD))(WdfFunctions_01015 + 2160))(
              WdfDriverGlobals,
              v6,
              v12,
              &v30,
              0LL);
      if ( v11 >= 0 )
      {
        v33 = (char *)v30;
        v7 = v12;
        v35 = v12;
        ((void (__fastcall *)(__int64, __int64))qword_1C00116D8)(v9, 0x800000000000LL);
        v13 = 0;
        if ( EmiChannelCount )
        {
          v14 = v33;
          do
          {
            v15 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64))qword_1C00116E0)(v28, v13, 0x800000000000LL);
            v16 = (unsigned __int64 *)&v14[16 * v5];
            v11 = ((__int64 (__fastcall *)(__int64, _QWORD, unsigned __int64 *, unsigned __int64 *))qword_1C00116E8)(
                    v28,
                    v15,
                    v16,
                    v16 + 1);
            ++v5;
            v13 = v15 + 1;
            v17 = (unsigned __int16)EmiChannelCount;
            *v16 = 2500 * *v16 / 9;
          }
          while ( v5 < v17 );
LABEL_15:
          v7 = v35;
          v6 = a2;
        }
      }
      break;
    default:
      v11 = -1073741637;
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 2120))(
               WdfDriverGlobals,
               v6,
               (unsigned int)v11,
               v7);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 2120))(
           WdfDriverGlobals,
           v6,
           (unsigned int)v11,
           v7);
}
