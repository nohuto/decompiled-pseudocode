/*
 * XREFs of EmiProcessIoctl @ 0x1C0039850
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C000AC6C (RtlStringCchPrintfW.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000C7C0 (memset.c)
 */

__int64 __fastcall EmiProcessIoctl(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v5; // edi
  __int64 v6; // r13
  unsigned int v7; // r15d
  __int64 v8; // rax
  __int64 v9; // r14
  int v10; // ebx
  int v11; // esi
  unsigned int v12; // ebx
  unsigned int v13; // ecx
  char *v14; // r13
  unsigned __int64 *v15; // rbx
  unsigned int v16; // ebx
  unsigned int v17; // r12d
  _DWORD *v18; // rbx
  unsigned int v19; // ecx
  wchar_t *v20; // rbx
  unsigned int v21; // r13d
  NTSTATUS v22; // eax
  __int64 v24; // [rsp+20h] [rbp-50h]
  __int64 v25; // [rsp+28h] [rbp-48h]
  int v26; // [rsp+40h] [rbp-30h] BYREF
  char *v27; // [rsp+48h] [rbp-28h]
  void *v28; // [rsp+50h] [rbp-20h] BYREF
  __int64 v29; // [rsp+58h] [rbp-18h] BYREF
  __int64 v30; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v32; // [rsp+C0h] [rbp+50h]
  unsigned int v33; // [rsp+C0h] [rbp+50h]

  v5 = 0;
  v6 = a2;
  v29 = 0LL;
  v30 = 0LL;
  v7 = 0;
  v26 = 0;
  v28 = 0LL;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v8,
         off_1C00120A8);
  if ( a5 == 2244608 )
  {
    v10 = 2;
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, void **, _QWORD))(WdfFunctions_01015 + 2160))(
            WdfDriverGlobals,
            v6,
            2LL,
            &v28,
            0LL);
    if ( v11 < 0 )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 2120))(
               WdfDriverGlobals,
               v6,
               (unsigned int)v11,
               v7);
    *(_WORD *)v28 = 2;
    goto LABEL_24;
  }
  v10 = 4;
  switch ( a5 )
  {
    case 2244612:
      v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, void **, _QWORD))(WdfFunctions_01015 + 2160))(
              WdfDriverGlobals,
              v6,
              4LL,
              &v28,
              0LL);
      if ( v11 < 0 )
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 2120))(
                 WdfDriverGlobals,
                 v6,
                 (unsigned int)v11,
                 v7);
      *(_DWORD *)v28 = 106 * *(unsigned __int16 *)(v9 + 1264) + 68;
LABEL_24:
      v7 = v10;
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 2120))(
               WdfDriverGlobals,
               v6,
               (unsigned int)v11,
               v7);
    case 2244616:
      v16 = 106 * *(unsigned __int16 *)(v9 + 1264) + 68;
      v17 = v16;
      v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, void **, _QWORD))(WdfFunctions_01015 + 2160))(
              WdfDriverGlobals,
              v6,
              v16,
              &v28,
              0LL);
      if ( v11 >= 0 )
      {
        v7 = v16;
        LODWORD(v27) = v16;
        v18 = v28;
        memset(v28, 0, v17);
        v19 = 0;
        *(_OWORD *)v18 = *(_OWORD *)L"Microsoft";
        v18[4] = *(_DWORD *)L"t";
        *((_QWORD *)v18 + 4) = 0x4D00500050LL;
        *((_WORD *)v18 + 32) = 1;
        *((_WORD *)v18 + 33) = *(_WORD *)(v9 + 1264);
        v20 = (wchar_t *)(v18 + 17);
        if ( *(_WORD *)(v9 + 1264) )
        {
          v21 = 0;
          do
          {
            v33 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64))qword_1C0012768)(v9, v19, 0x800000000000LL);
            ((void (__fastcall *)(_QWORD, __int64 *, __int64 *, int *))qword_1C0012778)(v33, &v30, &v29, &v26);
            if ( v26 == 1 )
            {
              LODWORD(v25) = *(_DWORD *)(*(_QWORD *)(v9 + 1248) + 24LL);
              LODWORD(v24) = *(_DWORD *)(*(_QWORD *)(v9 + 1080) + 32LL);
              v22 = RtlStringCchPrintfW(v20 + 3, 0x64uLL, L"%s_Package%d_Core%d_%s", v30, v24, v25, v29);
            }
            else
            {
              LODWORD(v24) = *(_DWORD *)(*(_QWORD *)(v9 + 1080) + 32LL);
              v22 = RtlStringCchPrintfW(v20 + 3, 0x64uLL, L"%s_Package%d_%s", v30, v24, v29);
            }
            v11 = v22;
            *(_DWORD *)v20 = 0;
            v19 = v33 + 1;
            v20[2] = 100;
            ++v21;
            v20 += 53;
          }
          while ( v21 < *(unsigned __int16 *)(v9 + 1264) );
          v7 = (unsigned int)v27;
          goto LABEL_19;
        }
      }
      break;
    case 2244620:
      v12 = 16 * *(unsigned __int16 *)(v9 + 1264);
      v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, void **, _QWORD))(WdfFunctions_01015 + 2160))(
              WdfDriverGlobals,
              v6,
              v12,
              &v28,
              0LL);
      if ( v11 >= 0 )
      {
        v27 = (char *)v28;
        v7 = v12;
        ((void (__fastcall *)(__int64, __int64))qword_1C0012760)(v9, 0x800000000000LL);
        v13 = 0;
        if ( *(_WORD *)(v9 + 1264) )
        {
          v14 = v27;
          do
          {
            v32 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64))qword_1C0012768)(v9, v13, 0x800000000000LL);
            v15 = (unsigned __int64 *)&v14[16 * v5];
            v11 = ((__int64 (__fastcall *)(__int64, _QWORD, unsigned __int64 *, unsigned __int64 *))qword_1C0012770)(
                    v9,
                    v32,
                    v15,
                    v15 + 1);
            ++v5;
            v13 = v32 + 1;
            *v15 = 2500 * *v15 / 9;
          }
          while ( v5 < *(unsigned __int16 *)(v9 + 1264) );
LABEL_19:
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
