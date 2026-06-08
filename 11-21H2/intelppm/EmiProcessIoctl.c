/*
 * XREFs of EmiProcessIoctl @ 0x1C002A9D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C0002924 (RtlStringCchPrintfW.c)
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0003A00 (memset.c)
 */

__int64 __fastcall EmiProcessIoctl(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v5; // edi
  __int64 v6; // r15
  unsigned int v7; // r14d
  __int64 v8; // rax
  __int64 v9; // r13
  int v10; // ebx
  unsigned int v11; // ebx
  unsigned int v12; // r12d
  NTSTATUS v13; // esi
  _DWORD *v14; // rbx
  unsigned int v15; // ecx
  __int16 v16; // ax
  wchar_t *v17; // rbx
  unsigned int v18; // r15d
  unsigned int v19; // eax
  unsigned int v21; // ebx
  unsigned int v22; // r13d
  char *v23; // r14
  unsigned int v24; // r13d
  unsigned __int64 *v25; // rbx
  unsigned int v26; // eax
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
         off_1C0015018);
  v28 = v9;
  if ( a5 == 2244608 )
  {
    v10 = 2;
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, void **, _QWORD))(WdfFunctions_01015 + 2160))(
            WdfDriverGlobals,
            v6,
            2LL,
            &v30,
            0LL);
    if ( v13 < 0 )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 2120))(
               WdfDriverGlobals,
               v6,
               (unsigned int)v13,
               v7);
    *(_WORD *)v30 = 2;
    goto LABEL_11;
  }
  v10 = 4;
  switch ( a5 )
  {
    case 2244612:
      v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, void **, _QWORD))(WdfFunctions_01015 + 2160))(
              WdfDriverGlobals,
              v6,
              4LL,
              &v30,
              0LL);
      if ( v13 < 0 )
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 2120))(
                 WdfDriverGlobals,
                 v6,
                 (unsigned int)v13,
                 v7);
      *(_DWORD *)v30 = 106 * (unsigned __int16)EmiChannelCount + 68;
LABEL_11:
      v7 = v10;
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 2120))(
               WdfDriverGlobals,
               v6,
               (unsigned int)v13,
               v7);
    case 2244616:
      v11 = 106 * (unsigned __int16)EmiChannelCount + 68;
      v12 = v11;
      v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, void **, _QWORD))(WdfFunctions_01015 + 2160))(
              WdfDriverGlobals,
              v6,
              v11,
              &v30,
              0LL);
      if ( v13 >= 0 )
      {
        v7 = v11;
        v35 = v11;
        v14 = v30;
        memset(v30, 0, v12);
        v15 = 0;
        *(_OWORD *)v14 = *(_OWORD *)L"Microsoft";
        v14[4] = *(_DWORD *)L"t";
        *((_QWORD *)v14 + 4) = 0x4D00500050LL;
        v16 = EmiChannelCount;
        *((_WORD *)v14 + 33) = EmiChannelCount;
        *((_WORD *)v14 + 32) = 1;
        v17 = (wchar_t *)(v14 + 17);
        if ( v16 )
        {
          v18 = 0;
          do
          {
            v29 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64))qword_1C001DF80)(v9, v15, 0x800000000000LL);
            ((void (__fastcall *)(_QWORD, __int64 *, __int64 *))qword_1C001DF90)(v29, &v32, &v31);
            LODWORD(v27) = *(_DWORD *)(*(_QWORD *)(v9 + 1080) + 32LL);
            v13 = RtlStringCchPrintfW(v17 + 3, 0x64uLL, L"%s_Package%d_%s", v32, v27, v31);
            v19 = (unsigned __int16)EmiChannelCount;
            v15 = v29 + 1;
            ++v18;
            *(_DWORD *)v17 = 0;
            v17[2] = 100;
            v17 += 53;
          }
          while ( v18 < v19 );
LABEL_8:
          v7 = v35;
          v6 = a2;
        }
      }
      break;
    case 2244620:
      v21 = 16 * (unsigned __int16)EmiChannelCount;
      v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, void **, _QWORD))(WdfFunctions_01015 + 2160))(
              WdfDriverGlobals,
              v6,
              v21,
              &v30,
              0LL);
      if ( v13 >= 0 )
      {
        v33 = (char *)v30;
        v7 = v21;
        v35 = v21;
        ((void (__fastcall *)(__int64, __int64))qword_1C001DF78)(v9, 0x800000000000LL);
        v22 = 0;
        if ( EmiChannelCount )
        {
          v23 = v33;
          do
          {
            v24 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64))qword_1C001DF80)(v28, v22, 0x800000000000LL);
            v25 = (unsigned __int64 *)&v23[16 * v5];
            v13 = ((__int64 (__fastcall *)(__int64, _QWORD, unsigned __int64 *, unsigned __int64 *))qword_1C001DF88)(
                    v28,
                    v24,
                    v25,
                    v25 + 1);
            ++v5;
            v22 = v24 + 1;
            v26 = (unsigned __int16)EmiChannelCount;
            *v25 = 2500 * *v25 / 9;
          }
          while ( v5 < v26 );
          goto LABEL_8;
        }
      }
      break;
    default:
      v13 = -1073741637;
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 2120))(
               WdfDriverGlobals,
               v6,
               (unsigned int)v13,
               v7);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 2120))(
           WdfDriverGlobals,
           v6,
           (unsigned int)v13,
           v7);
}
