/*
 * XREFs of ?OnInternalIoctl@MonitorDescriptorState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C01EF448
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C01E47F0 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     MonitorLogBadEDID @ 0x1C03B090C (MonitorLogBadEDID.c)
 */

__int64 __fastcall DxgMonitor::MonitorDescriptorState::OnInternalIoctl(
        DxgMonitor::MonitorDescriptorState *this,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 *a4,
        unsigned int a5,
        char *a6,
        unsigned __int64 *a7)
{
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  __int64 v21; // rcx
  int v22; // eax
  __int16 v23; // si
  _WORD *v24; // rbx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  int v31; // eax
  unsigned int v32; // edi
  __int64 v33; // rcx
  int v34; // eax
  __int64 v36; // rcx
  int v37; // eax
  unsigned __int64 v38; // rbx
  __int64 v39; // rcx
  _WORD *v40; // r12
  int v41; // eax
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rcx
  _BYTE *v45; // rbx
  _WORD *v46; // rbx
  void *v47; // rbx
  int v48; // eax
  _WORD *v49; // rbx
  __int64 v50; // rcx
  int v51; // eax
  char *v52; // rdx
  unsigned int v53; // ecx
  char v54; // al
  unsigned __int64 v55; // rax
  __int128 v56; // xmm1
  unsigned __int64 *v57; // rax
  __int64 v58; // rcx
  int v59; // eax
  _WORD *v60; // rdx
  int v61; // eax
  unsigned int v62; // [rsp+30h] [rbp-71h] BYREF
  void *v63; // [rsp+38h] [rbp-69h] BYREF
  int v64; // [rsp+40h] [rbp-61h] BYREF
  __int16 v65; // [rsp+44h] [rbp-5Dh]
  unsigned __int64 *v66; // [rsp+48h] [rbp-59h]
  _QWORD v67[2]; // [rsp+50h] [rbp-51h] BYREF
  _QWORD v68[2]; // [rsp+60h] [rbp-41h] BYREF
  _QWORD v69[2]; // [rsp+70h] [rbp-31h] BYREF
  __int128 v70; // [rsp+80h] [rbp-21h] BYREF
  __int128 v71; // [rsp+90h] [rbp-11h]

  v63 = a6;
  v66 = a7;
  LODWORD(v10) = -1073741637;
  v11 = (unsigned int)a2;
  v12 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v12 + 24) = v11;
  *(_QWORD *)(v12 + 32) = this;
  v13 = v11 - 2302979;
  if ( !v13 )
  {
    WdLogSingleEntry0(2LL);
    return (unsigned int)v10;
  }
  v14 = v13 - 12;
  if ( !v14 )
  {
    v36 = *((_QWORD *)this + 20);
    if ( !v36 )
      goto LABEL_97;
    if ( a3 < 0x10 || a5 < 0x10 )
      goto LABEL_64;
    v62 = 0;
    v37 = (*(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD, _QWORD))(*(_QWORD *)v36 + 192LL))(
            v36,
            &v62,
            0LL,
            0LL);
    v10 = v37;
    if ( (int)(v37 + 0x80000000) < 0 || v37 == -1073741789 )
    {
      if ( !v62 )
        goto LABEL_97;
      v38 = 56LL * (v62 - 1) + 60;
      if ( *a4 < v38 )
        goto LABEL_65;
      v39 = *((_QWORD *)this + 20);
      v40 = (_WORD *)a4[1];
      v64 = 0;
      v41 = (*(__int64 (__fastcall **)(__int64, unsigned int *, int *, _WORD *))(*(_QWORD *)v39 + 192LL))(
              v39,
              &v62,
              &v64,
              v40 + 2);
      v10 = v41;
      if ( v41 >= 0 )
      {
        *v40 = v62;
        v40[1] = v64;
        goto LABEL_41;
      }
    }
LABEL_99:
    WdLogSingleEntry1(2LL, v10);
    return (unsigned int)v10;
  }
  v15 = v14 - 4;
  if ( !v15 )
  {
    v58 = *((_QWORD *)this + 20);
    if ( !v58 )
      goto LABEL_97;
    if ( a3 < 0x10 || a5 < 0x10 )
      goto LABEL_64;
    LOWORD(v62) = 0;
    v59 = (*(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD))(*(_QWORD *)v58 + 200LL))(v58, &v62, 0LL);
    v10 = v59;
    if ( v59 == -1073741275 )
      goto LABEL_97;
    if ( (int)(v59 + 0x80000000) < 0 || v59 == -1073741789 )
    {
      v38 = 52LL * (unsigned __int16)v62 + 4;
      if ( *a4 >= v38 )
      {
        v60 = (_WORD *)a4[1];
        *v60 = v62;
        v61 = (*(__int64 (__fastcall **)(_QWORD, _WORD *, _WORD *))(**((_QWORD **)this + 20) + 200LL))(
                *((_QWORD *)this + 20),
                v60,
                v60 + 2);
        v10 = v61;
        if ( v61 < 0 )
          goto LABEL_99;
LABEL_41:
        *(_QWORD *)v63 = v38;
        goto LABEL_31;
      }
LABEL_65:
      LODWORD(v10) = -2147483643;
      goto LABEL_41;
    }
    goto LABEL_99;
  }
  v16 = v15 - 4;
  if ( v16 )
  {
    v17 = v16 - 4;
    if ( v17 )
    {
      v18 = v17 - 4;
      if ( v18 )
      {
        v19 = v18 - 4;
        if ( v19 )
        {
          v20 = v19 - 4;
          if ( v20 )
          {
            if ( v20 != 4 )
              return (unsigned int)v10;
            v42 = *((_QWORD *)this + 20);
            if ( v42 )
            {
              if ( a3 >= 0x10 && a5 >= 0x10 )
              {
                LOBYTE(v62) = 0;
                v43 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v42 + 152LL))(v42, &v62);
                v10 = v43;
                if ( v43 >= 0 )
                {
                  if ( *a4 )
                  {
                    v45 = (_BYTE *)a4[1];
                    memset(v45, 0, *a4);
                    *v45 = v62;
                  }
                  else
                  {
                    LODWORD(v10) = -2147483643;
                  }
                  *(_QWORD *)v63 = 1LL;
                  goto LABEL_31;
                }
LABEL_47:
                if ( (_DWORD)v10 == -1073741275 )
                  return (unsigned int)v10;
LABEL_76:
                WdLogSingleEntry1(3LL, v10);
                MonitorLogBadEDID((unsigned int)v10);
                return (unsigned int)v10;
              }
LABEL_64:
              LODWORD(v10) = -1073741789;
              return (unsigned int)v10;
            }
          }
          else
          {
            v21 = *((_QWORD *)this + 20);
            if ( v21 )
            {
              if ( a3 >= 0x10 && a5 >= 0x10 )
              {
                v64 = 0;
                v65 = 0;
                v22 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v21 + 144LL))(v21, &v64);
                v10 = v22;
                if ( v22 >= 0 )
                {
                  if ( *a4 >= 6 )
                  {
                    v46 = (_WORD *)a4[1];
                    memset(v46, 0, *a4);
                    *(_DWORD *)v46 = v64;
                    v46[2] = v65;
                  }
                  else
                  {
                    LODWORD(v10) = -2147483643;
                  }
                  *(_QWORD *)v63 = 6LL;
                  goto LABEL_31;
                }
                goto LABEL_47;
              }
              goto LABEL_64;
            }
          }
        }
        else if ( *((_QWORD *)this + 20) )
        {
          if ( a3 >= 0x10 && a5 >= 0x10 )
          {
            if ( *a4 >= 0xB )
            {
              v47 = (void *)a4[1];
              memset(v47, 0, *a4);
              v48 = (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 20) + 136LL))(
                      *((_QWORD *)this + 20),
                      v47);
              LODWORD(v10) = v48;
              if ( v48 < 0 )
              {
                WdLogSingleEntry1(3LL, v48);
                MonitorLogBadEDID((unsigned int)v10);
              }
            }
            else
            {
              LODWORD(v10) = -2147483643;
            }
            *(_QWORD *)v63 = 11LL;
            goto LABEL_31;
          }
          goto LABEL_64;
        }
      }
      else if ( *((_QWORD *)this + 20) )
      {
        if ( a3 >= 0x10 && a5 >= 0x10 )
        {
          if ( *a4 >= 0x10 )
          {
            v49 = (_WORD *)a4[1];
            memset(v49, 0, *a4);
            v50 = *((_QWORD *)this + 20);
            v70 = 0LL;
            v71 = 0LL;
            v51 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v50 + 120LL))(v50, &v70);
            LODWORD(v10) = v51;
            if ( v51 >= 0 )
            {
              *v49 = (unsigned __int16)v70 >> 2;
              v49[1] = WORD2(v70) >> 2;
              v49[4] = WORD4(v70) >> 2;
              v49[5] = WORD6(v70) >> 2;
              v49[2] = (unsigned __int16)v71 >> 2;
              v49[3] = WORD2(v71) >> 2;
              v49[6] = WORD4(v71) >> 2;
              v49[7] = WORD6(v71) >> 2;
            }
            else
            {
              WdLogSingleEntry1(3LL, v51);
              MonitorLogBadEDID((unsigned int)v10);
            }
          }
          else
          {
            LODWORD(v10) = -2147483643;
          }
          *(_QWORD *)v63 = 16LL;
          goto LABEL_31;
        }
        goto LABEL_64;
      }
LABEL_97:
      LODWORD(v10) = -1071841279;
      return (unsigned int)v10;
    }
    v23 = 0;
    if ( !*((_QWORD *)this + 20) )
      goto LABEL_97;
    if ( a3 < 0x10 || a5 < 0x10 )
      goto LABEL_64;
    if ( *a4 < 0x82 )
    {
      LODWORD(v10) = -2147483643;
    }
    else
    {
      v24 = (_WORD *)a4[1];
      memset(v24, 0, *a4);
      v25 = *((_QWORD *)this + 20);
      v67[0] = 0x200000LL;
      v67[1] = v24;
      v26 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v25 + 72LL))(v25, v67);
      v10 = v26;
      if ( v26 < 0 )
        goto LABEL_76;
      v27 = *((_QWORD *)this + 20);
      v68[1] = v24 + 16;
      v68[0] = 0x200000LL;
      v28 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v27 + 80LL))(v27, v68);
      v10 = v28;
      if ( v28 == -1073741275 )
      {
        WdLogSingleEntry0(7LL);
      }
      else if ( v28 < 0 )
      {
        goto LABEL_76;
      }
      v29 = *((_QWORD *)this + 20);
      v69[1] = v24 + 32;
      v69[0] = 0x200000LL;
      v30 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v29 + 64LL))(v29, v69);
      v10 = v30;
      if ( v30 < 0 )
        goto LABEL_76;
      v31 = (*(__int64 (__fastcall **)(_QWORD, _WORD *, _WORD *))(**((_QWORD **)this + 20) + 88LL))(
              *((_QWORD *)this + 20),
              v24 + 48,
              v24 + 49);
      v32 = v31;
      if ( v31 < 0 )
      {
        WdLogSingleEntry1(3LL, v31);
        MonitorLogBadEDID(v32);
      }
      v33 = *((_QWORD *)this + 20);
      *((_QWORD *)&v70 + 1) = v24 + 51;
      *(_QWORD *)&v70 = 1835008LL;
      v34 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v33 + 104LL))(v33, &v70);
      LODWORD(v10) = v34;
      if ( v34 == -1073741275 )
      {
        WdLogSingleEntry0(7LL);
        LODWORD(v10) = 0;
      }
      else
      {
        if ( v34 < 0 )
        {
          WdLogSingleEntry1(3LL, v34);
          MonitorLogBadEDID((unsigned int)v10);
          v24[50] = 0;
          return (unsigned int)v10;
        }
        v23 = 13;
      }
      v24[50] = v23;
    }
    *(_QWORD *)v63 = 130LL;
LABEL_31:
    *v66 = 16LL;
    return (unsigned int)v10;
  }
  v44 = *((_QWORD *)this + 16);
  if ( !v44 )
    goto LABEL_97;
  if ( a3 < 0x88 || a5 < 0x88 )
    goto LABEL_64;
  v62 = 0;
  (*(void (__fastcall **)(__int64, void **, unsigned int *))(*(_QWORD *)v44 + 232LL))(v44, &v63, &v62);
  v52 = (char *)v63;
  if ( v63 && v62 >= 0x80 && (v53 = *(unsigned __int8 *)a4, v53 < v62 >> 7) )
  {
    *a6 = v53;
    LODWORD(v10) = 0;
    v54 = *(_BYTE *)a4;
    *((_DWORD *)a6 + 33) = 2;
    a6[1] = v54 != 0 ? -1 : 1;
    v55 = (unsigned __int64)*(unsigned __int8 *)a4 << 7;
    *(_OWORD *)(a6 + 2) = *(_OWORD *)&v52[v55];
    *(_OWORD *)(a6 + 18) = *(_OWORD *)&v52[v55 + 16];
    *(_OWORD *)(a6 + 34) = *(_OWORD *)&v52[v55 + 32];
    *(_OWORD *)(a6 + 50) = *(_OWORD *)&v52[v55 + 48];
    *(_OWORD *)(a6 + 66) = *(_OWORD *)&v52[v55 + 64];
    *(_OWORD *)(a6 + 82) = *(_OWORD *)&v52[v55 + 80];
    *(_OWORD *)(a6 + 98) = *(_OWORD *)&v52[v55 + 96];
    v56 = *(_OWORD *)&v52[v55 + 112];
    v57 = v66;
    *(_OWORD *)(a6 + 114) = v56;
    *v57 = 136LL;
  }
  else
  {
    LODWORD(v10) = -1071841279;
  }
  v63 = 0LL;
  if ( v52 )
    operator delete[](v52);
  return (unsigned int)v10;
}
