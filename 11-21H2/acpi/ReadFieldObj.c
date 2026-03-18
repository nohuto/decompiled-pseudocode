/*
 * XREFs of ReadFieldObj @ 0x1C001A6A0
 * Callers:
 *     <none>
 * Callees:
 *     AccessFieldData @ 0x1C001AC40 (AccessFieldData.c)
 *     PushAccFieldObj @ 0x1C001B7F8 (PushAccFieldObj.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 */

__int64 __fastcall ReadFieldObj(__int64 a1, __int64 a2, unsigned int a3)
{
  int v5; // r8d
  unsigned int v6; // eax
  unsigned int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 result; // rax
  unsigned int v13; // ecx
  __int64 v14; // rdi
  unsigned int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rsi
  char v18; // r8
  unsigned __int64 v19; // r12
  __int64 v20; // r15
  __int64 v21; // rdi
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  int v24; // r8d
  unsigned int v25; // edx
  __int64 v26; // rsi
  unsigned int v27; // ecx
  __int64 v28; // rdi
  __int64 v29; // r14
  unsigned __int64 v30; // r10
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // r12
  unsigned __int64 v34; // rdx
  int v35; // eax
  int v36; // ecx
  int v37; // r8d
  int v38; // ecx
  int v39; // eax
  int v40; // eax
  _QWORD *v41; // rdi
  _QWORD *v42; // rbx
  __int64 v43; // r8
  _QWORD *v44; // rax
  _QWORD *i; // rdx
  _QWORD *v46; // rcx
  _QWORD *v47; // r9
  __int64 v48; // rcx
  _QWORD *v49; // rax
  _QWORD *v50; // r9
  _QWORD *v51; // rbx
  __int64 v52; // rdx
  _QWORD *v53; // rax
  __int64 v54; // rax
  __int64 v55; // r10
  __int64 v56; // rcx
  _QWORD *v57; // rax
  __int64 v58; // rcx
  int (__fastcall *v59)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *); // rax
  __int64 v60; // rax
  int *v61; // rcx
  int (__fastcall *v62)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *); // rax
  __int64 v63; // rax
  int *v64; // rcx
  __int64 v65; // rcx
  _QWORD *v66; // rax
  signed __int32 v67[8]; // [rsp+0h] [rbp-100h] BYREF
  char v68; // [rsp+30h] [rbp-D0h]
  __int64 Src; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v70; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v71; // [rsp+48h] [rbp-B8h]
  int v72; // [rsp+4Ch] [rbp-B4h] BYREF
  int v73; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE *v74; // [rsp+58h] [rbp-A8h]
  _QWORD v75[10]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v76[10]; // [rsp+B0h] [rbp-50h] BYREF

  v71 = a3;
  if ( a3 )
    goto LABEL_42;
  v5 = *(_DWORD *)(a2 + 16);
  if ( (v5 & 0xF) == 0 )
  {
    v6 = *(_DWORD *)(a2 + 80);
    v7 = *(_DWORD *)(a2 + 60);
    v8 = a2 + 96;
    while ( 1 )
    {
      if ( v6 >= v7 )
      {
        v40 = v5 + 3;
        goto LABEL_41;
      }
      *(_DWORD *)(a2 + 16) = v5 + 1;
      v9 = *(_QWORD *)(a2 + 32);
      if ( *(_WORD *)(v9 + 2) == 5 )
      {
        v10 = **(_QWORD **)(v9 + 32);
        if ( *(_WORD *)(v10 + 66) == 132 )
          return PushAccFieldObj(
                   a1,
                   WriteFieldObj,
                   **(_QWORD **)(v10 + 96) + 64LL,
                   *(_QWORD *)(**(_QWORD **)(v10 + 96) + 96LL) + 8LL,
                   v8,
                   4);
      }
LABEL_7:
      v11 = *(_QWORD *)(a2 + 32);
      ++*(_DWORD *)(a2 + 16);
      result = AccessFieldData(a1, v11, (int)a2 + 96, (int)a2 + 88, 1);
      v71 = result;
      if ( (_DWORD)result || a2 != *(_QWORD *)(a1 + 416) )
        return result;
LABEL_9:
      if ( !*(_DWORD *)(a2 + 80) )
        goto LABEL_26;
      v13 = *(_DWORD *)(a2 + 76);
      v14 = v13 >= 0x40 ? 0LL : 1LL << v13;
      v15 = *(_DWORD *)(a2 + 72);
      v16 = v15 >= 0x40 ? 0LL : *(_QWORD *)(a2 + 88) << v15;
      v17 = *(unsigned int *)(a2 + 56);
      v18 = 0;
      v19 = *(_QWORD *)(a2 + 40);
      v20 = v16 & *(_QWORD *)(a2 + 64);
      v21 = (v14 - 1) << v15;
      v22 = 0LL;
      Src = 0LL;
      v72 = 0;
      v75[0] = 0LL;
      v75[1] = 255LL;
      v75[2] = 0xFFFFLL;
      v75[3] = 0LL;
      v75[4] = 0xFFFFFFFFLL;
      memset(&v75[5], 0, 24);
      v75[8] = -1LL;
      v68 = 0;
      if ( (unsigned int)v17 <= 8 )
        break;
LABEL_25:
      *(_QWORD *)(a2 + 40) += *(unsigned int *)(a2 + 56);
      if ( *(_QWORD *)(a2 + 40) >= *(_QWORD *)(a2 + 48) )
      {
        ++*(_DWORD *)(a2 + 16);
        goto LABEL_42;
      }
LABEL_26:
      v24 = *(_DWORD *)(a2 + 76);
      v25 = *(_DWORD *)(a2 + 72);
      v26 = *(_QWORD *)(a2 + 88) >> v24;
      v27 = *(_DWORD *)(a2 + 104);
      *(_QWORD *)(a2 + 88) = v26;
      if ( v27 < v25 )
      {
        if ( v27 >= 0x40 )
          v54 = 0LL;
        else
          v54 = 1LL << v27;
        v26 &= v54 - 1;
        *(_QWORD *)(a2 + 88) = v26;
      }
      if ( v25 >= 0x40 )
        v28 = 0LL;
      else
        v28 = 1LL << v25;
      v29 = *(unsigned int *)(a2 + 56);
      v30 = *(_QWORD *)(a2 + 40);
      v31 = (v28 - 1) >> v24;
      v32 = 0LL;
      v70 = 0LL;
      v74 = (_BYTE *)v30;
      v73 = 0;
      v76[0] = 0LL;
      v76[1] = 255LL;
      v76[2] = 0xFFFFLL;
      v76[3] = 0LL;
      v76[4] = 0xFFFFFFFFLL;
      memset(&v76[5], 0, 24);
      v76[8] = -1LL;
      if ( (unsigned int)v29 <= 8 )
      {
        v33 = v76[v29];
        if ( BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink) )
        {
          v62 = *(int (__fastcall **)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *))(PmHalDispatchTable + 144);
          if ( v62 )
          {
            if ( v31 == v33 )
            {
LABEL_111:
              v63 = v26 | v32 & ~v31;
              v64 = &v73;
              v70 = v63;
              LOBYTE(v64) = 1;
              if ( (*(int (__fastcall **)(int *, unsigned __int64, __int64 *, _QWORD, int *))(PmHalDispatchTable + 144))(
                     v64,
                     v30,
                     &v70,
                     (unsigned int)v29,
                     &v73) >= 0 )
                goto LABEL_38;
            }
            else if ( v62(0LL, v30, &v70, (unsigned int)v29, &v73) >= 0 )
            {
              v32 = v70;
              v30 = (unsigned __int64)v74;
              goto LABEL_111;
            }
            v32 = v70;
            v30 = (unsigned __int64)v74;
          }
        }
        if ( (unsigned int)v29 == 1LL )
          v34 = 0LL;
        else
          v34 = v30 % (unsigned int)v29;
        if ( v34 )
        {
          if ( v31 != v33 )
          {
            memmove(&v70, (const void *)v30, (unsigned int)v29);
            v32 = v70;
            v30 = (unsigned __int64)v74;
          }
          v70 = v26 | v32 & ~v31;
          memmove((void *)v30, &v70, (unsigned int)v29);
        }
        else
        {
          switch ( (_DWORD)v29 )
          {
            case 1:
              if ( v31 != v33 )
                v32 = *(unsigned __int8 *)v30;
              v70 = v26 | v32 & ~v31;
              *(_BYTE *)v30 = v70;
              _InterlockedOr(v67, 0);
              break;
            case 4:
              if ( v31 != v33 )
                v32 = *(unsigned int *)v30;
              v70 = v26 | v32 & ~v31;
              *(_DWORD *)v30 = v70;
              _InterlockedOr(v67, 0);
              break;
            case 2:
              if ( v31 != v33 )
                v32 = *(unsigned __int16 *)v30;
              v70 = v26 | v32 & ~v31;
              *(_WORD *)v30 = v70;
              _InterlockedOr(v67, 0);
              break;
            case 8:
              if ( v31 != v33 )
                v32 = *(_QWORD *)v30;
              v70 = v26 | v32 & ~v31;
              *(_QWORD *)v30 = v70;
              KeFlushWriteBuffer();
              break;
          }
        }
      }
LABEL_38:
      v35 = *(_DWORD *)(a2 + 56);
      v8 = a2 + 96;
      *(_DWORD *)(a2 + 96) += v35;
      v36 = *(_DWORD *)(a2 + 100);
      v37 = *(_DWORD *)(a2 + 16);
      *(_DWORD *)(a2 + 100) = 0;
      v38 = v36 - 8 * v35;
      v39 = *(_DWORD *)(a2 + 80);
      *(_DWORD *)(a2 + 104) += v38;
      v7 = *(_DWORD *)(a2 + 60);
      v6 = v39 + 1;
      *(_DWORD *)(a2 + 80) = v6;
      if ( v6 >= v7 )
      {
        v40 = v37 + 1;
LABEL_41:
        *(_DWORD *)(a2 + 16) = v40;
        goto LABEL_42;
      }
      v5 = v37 - 2;
      *(_DWORD *)(a2 + 16) = v5;
    }
    if ( v21 == v75[v17] )
    {
      v18 = 1;
      v68 = 1;
    }
    if ( !BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink)
      || (v59 = *(int (__fastcall **)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *))(PmHalDispatchTable + 144)) == 0LL )
    {
LABEL_18:
      if ( (unsigned int)v17 == 1LL )
        v23 = 0LL;
      else
        v23 = v19 % (unsigned int)v17;
      if ( v23 )
      {
        if ( !v18 )
        {
          memmove(&Src, (const void *)v19, (unsigned int)v17);
          v22 = Src;
        }
        Src = v20 | v22 & ~v21;
        memmove((void *)v19, &Src, (unsigned int)v17);
      }
      else
      {
        switch ( (_DWORD)v17 )
        {
          case 1:
            if ( !v18 )
              v22 = *(unsigned __int8 *)v19;
            Src = v20 | v22 & ~v21;
            *(_BYTE *)v19 = Src;
            _InterlockedOr(v67, 0);
            break;
          case 2:
            if ( !v18 )
              v22 = *(unsigned __int16 *)v19;
            Src = v20 | v22 & ~v21;
            *(_WORD *)v19 = Src;
            _InterlockedOr(v67, 0);
            break;
          case 4:
            if ( !v18 )
              v22 = *(unsigned int *)v19;
            Src = v20 | v22 & ~v21;
            *(_DWORD *)v19 = Src;
            _InterlockedOr(v67, 0);
            break;
          case 8:
            if ( !v18 )
              v22 = *(_QWORD *)v19;
            Src = v20 | v22 & ~v21;
            *(_QWORD *)v19 = Src;
            KeFlushWriteBuffer();
            break;
        }
      }
      goto LABEL_25;
    }
    if ( !v18 )
    {
      if ( v59(0LL, v19, &Src, (unsigned int)v17, &v72) < 0 )
      {
LABEL_92:
        v22 = Src;
        v18 = v68;
        goto LABEL_18;
      }
      v22 = Src;
    }
    v60 = v20 | v22 & ~v21;
    v61 = &v72;
    Src = v60;
    LOBYTE(v61) = 1;
    if ( (*(int (__fastcall **)(int *, unsigned __int64, __int64 *, _QWORD, int *))(PmHalDispatchTable + 144))(
           v61,
           v19,
           &Src,
           (unsigned int)v17,
           &v72) >= 0 )
      goto LABEL_25;
    goto LABEL_92;
  }
  switch ( *(_DWORD *)(a2 + 16) & 0xF )
  {
    case 1:
      goto LABEL_7;
    case 2:
      goto LABEL_9;
    case 3:
LABEL_42:
      v41 = *(_QWORD **)(a1 + 416);
      v42 = v41 - 2;
      *(_QWORD *)(a1 + 416) = v41[1];
      *((_DWORD *)v41 - 4) = 0;
      byte_1C0082868 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      v43 = *(v41 - 1);
      v44 = *(_QWORD **)(v43 + 40);
      for ( i = (_QWORD *)(v43 + 40); v44 != i; v44 = (_QWORD *)*v44 )
      {
        if ( v41 < v44 )
          break;
      }
      v46 = (_QWORD *)v44[1];
      if ( (_QWORD *)*v46 == v44 )
      {
        v41[1] = v46;
        *v41 = v44;
        *v46 = v41;
        v44[1] = v41;
        v47 = (_QWORD *)*v41;
        v48 = *v41 - 16LL;
        if ( (_QWORD *)*v41 != i )
        {
          v55 = *((unsigned int *)v42 + 1);
          if ( (_QWORD *)v48 == (_QWORD *)((char *)v42 + v55) )
          {
            *((_DWORD *)v42 + 1) = v55 + *(_DWORD *)(v48 + 4);
            v56 = *v47;
            if ( *(_QWORD **)(*v47 + 8LL) != v47 )
              goto LABEL_126;
            v57 = (_QWORD *)v47[1];
            if ( (_QWORD *)*v57 != v47 )
              goto LABEL_126;
            *v57 = v56;
            *(_QWORD *)(v56 + 8) = v57;
          }
        }
        v49 = (_QWORD *)v42[3];
        v50 = v49 - 2;
        if ( v49 != i )
        {
          v58 = *((unsigned int *)v50 + 1);
          if ( v42 == (_QWORD *)((char *)v50 + v58) )
          {
            *((_DWORD *)v50 + 1) = *((_DWORD *)v42 + 1) + v58;
            v65 = *v41;
            if ( *(_QWORD **)(*v41 + 8LL) != v41 )
              goto LABEL_126;
            v66 = (_QWORD *)v41[1];
            if ( (_QWORD *)*v66 != v41 )
              goto LABEL_126;
            *v66 = v65;
            v42 = v50;
            *(_QWORD *)(v65 + 8) = v66;
          }
        }
        if ( *(_QWORD *)(v43 + 32) > (unsigned __int64)v42 + *((unsigned int *)v42 + 1) )
        {
LABEL_50:
          KeReleaseSpinLock(&gmutHeap, byte_1C0082868);
          return v71;
        }
        *(_QWORD *)(v43 + 32) = v42;
        v51 = v42 + 2;
        v52 = *v51;
        if ( *(_QWORD **)(*v51 + 8LL) == v51 )
        {
          v53 = (_QWORD *)v51[1];
          if ( (_QWORD *)*v53 == v51 )
          {
            *v53 = v52;
            *(_QWORD *)(v52 + 8) = v53;
            goto LABEL_50;
          }
        }
      }
LABEL_126:
      __fastfail(3u);
  }
  return v71;
}
