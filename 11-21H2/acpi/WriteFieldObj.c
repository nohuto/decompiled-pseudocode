/*
 * XREFs of WriteFieldObj @ 0x1C001A310
 * Callers:
 *     <none>
 * Callees:
 *     AccessFieldData @ 0x1C001AC40 (AccessFieldData.c)
 *     ReadSystemMem @ 0x1C001B2D0 (ReadSystemMem.c)
 *     PushAccFieldObj @ 0x1C001B7F8 (PushAccFieldObj.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 */

__int64 __fastcall WriteFieldObj(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // esi
  int v6; // edx
  unsigned int v7; // eax
  __int64 v8; // r10
  unsigned int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  size_t v13; // rsi
  __int64 v14; // r14
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 SystemMem; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // eax
  int v22; // ecx
  int v23; // edx
  int v24; // ecx
  int v25; // eax
  int v26; // eax
  _QWORD *v27; // rdi
  _QWORD *v28; // rbx
  __int64 v29; // r8
  _QWORD *v30; // rax
  _QWORD *i; // rdx
  _QWORD *v32; // rcx
  _QWORD *v33; // r9
  __int64 v34; // rcx
  _QWORD *v35; // rax
  _QWORD *v36; // r9
  _QWORD *v37; // rbx
  __int64 v38; // rdx
  _QWORD *v39; // rax
  __int64 v41; // rax
  void *v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // r10
  __int64 v45; // rcx
  _QWORD *v46; // rax
  int (__fastcall *v47)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *); // rax
  __int64 v48; // rcx
  _QWORD *v49; // rax
  int v50; // [rsp+70h] [rbp+18h] BYREF
  __int64 v51; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  if ( a3 )
    goto LABEL_23;
  v6 = *(_DWORD *)(a2 + 16);
  switch ( v6 & 0xF )
  {
    case 0:
      v7 = *(_DWORD *)(a2 + 80);
      v8 = a2 + 96;
      v9 = *(_DWORD *)(a2 + 60);
      while ( v7 < v9 )
      {
        *(_DWORD *)(a2 + 16) = v6 + 1;
        v10 = *(_QWORD *)(a2 + 32);
        if ( *(_WORD *)(v10 + 2) == 5 )
        {
          v11 = **(_QWORD **)(v10 + 32);
          if ( *(_WORD *)(v11 + 66) == 132 )
            return (unsigned int)PushAccFieldObj(
                                   a1,
                                   WriteFieldObj,
                                   **(_QWORD **)(v11 + 96) + 64LL,
                                   *(_QWORD *)(**(_QWORD **)(v11 + 96) + 96LL) + 8LL,
                                   v8,
                                   4);
        }
LABEL_7:
        ++*(_DWORD *)(a2 + 16);
        v12 = *(_QWORD *)(a2 + 40);
        if ( v12 >= *(_QWORD *)(a2 + 48) )
        {
          SystemMem = 0LL;
        }
        else
        {
          v13 = *(unsigned int *)(a2 + 56);
          v14 = *(_QWORD *)(a2 + 64);
          v50 = 0;
          v51 = 0LL;
          if ( (unsigned int)v13 > 8 )
          {
            SystemMem = -1LL;
          }
          else
          {
            if ( BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink)
              && (v47 = *(int (__fastcall **)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *))(PmHalDispatchTable
                                                                                                 + 144)) != 0LL
              && v47(0LL, v12, &v51, (unsigned int)v13, &v50) >= 0 )
            {
              v16 = v51;
            }
            else
            {
              if ( v13 == 1 )
                v15 = 0LL;
              else
                v15 = v12 % v13;
              if ( v15 )
              {
                memmove(&v51, (const void *)v12, v13);
                v16 = v51;
              }
              else
              {
                switch ( (_DWORD)v13 )
                {
                  case 1:
                    v16 = *(unsigned __int8 *)v12;
                    break;
                  case 4:
                    v16 = *(unsigned int *)v12;
                    break;
                  case 2:
                    v16 = *(unsigned __int16 *)v12;
                    break;
                  case 8:
                    v16 = *(_QWORD *)v12;
                    break;
                  default:
                    v16 = -1LL;
                    break;
                }
              }
            }
            SystemMem = v14 & v16;
          }
        }
        if ( *(_DWORD *)(a2 + 80) )
        {
          v18 = SystemMem >> *(_DWORD *)(a2 + 72);
          *(_QWORD *)(a2 + 88) = v18;
          v41 = *(unsigned int *)(a2 + 56);
          *(_QWORD *)(a2 + 40) += v41;
          v42 = *(void **)(a2 + 40);
          if ( (unsigned __int64)v42 < *(_QWORD *)(a2 + 48) )
          {
            SystemMem = ReadSystemMem(v42, (unsigned int)v41);
            v18 = *(_QWORD *)(a2 + 88);
          }
          else
          {
            SystemMem = 0LL;
          }
        }
        else
        {
          v18 = 0LL;
        }
        v19 = v18 | *(_QWORD *)(a2 + 64) & (SystemMem << *(_DWORD *)(a2 + 76));
        v20 = *(_QWORD *)(a2 + 32);
        *(_QWORD *)(a2 + 88) = v19;
        v3 = AccessFieldData(a1, v20, (int)a2 + 96, (int)a2 + 88, 0);
        if ( v3 == 32772 || a2 != *(_QWORD *)(a1 + 416) )
          return v3;
LABEL_20:
        v21 = *(_DWORD *)(a2 + 56);
        v8 = a2 + 96;
        *(_DWORD *)(a2 + 96) += v21;
        v22 = *(_DWORD *)(a2 + 100);
        v23 = *(_DWORD *)(a2 + 16);
        *(_DWORD *)(a2 + 100) = 0;
        v24 = v22 - 8 * v21;
        v25 = *(_DWORD *)(a2 + 80);
        *(_DWORD *)(a2 + 104) += v24;
        v9 = *(_DWORD *)(a2 + 60);
        v7 = v25 + 1;
        *(_DWORD *)(a2 + 80) = v7;
        if ( v7 >= v9 )
        {
          v26 = v23 + 1;
          goto LABEL_22;
        }
        v6 = v23 - 2;
        *(_DWORD *)(a2 + 16) = v6;
      }
      v26 = v6 + 3;
LABEL_22:
      *(_DWORD *)(a2 + 16) = v26;
LABEL_23:
      v27 = *(_QWORD **)(a1 + 416);
      v28 = v27 - 2;
      *(_QWORD *)(a1 + 416) = v27[1];
      *((_DWORD *)v27 - 4) = 0;
      byte_1C0082868 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      v29 = *(v27 - 1);
      v30 = *(_QWORD **)(v29 + 40);
      for ( i = (_QWORD *)(v29 + 40); v30 != i; v30 = (_QWORD *)*v30 )
      {
        if ( v27 < v30 )
          break;
      }
      v32 = (_QWORD *)v30[1];
      if ( (_QWORD *)*v32 == v30 )
      {
        v27[1] = v32;
        *v27 = v30;
        *v32 = v27;
        v30[1] = v27;
        v33 = (_QWORD *)*v27;
        v34 = *v27 - 16LL;
        if ( (_QWORD *)*v27 != i )
        {
          v44 = *((unsigned int *)v28 + 1);
          if ( (_QWORD *)v34 == (_QWORD *)((char *)v28 + v44) )
          {
            *((_DWORD *)v28 + 1) = v44 + *(_DWORD *)(v34 + 4);
            v45 = *v33;
            if ( *(_QWORD **)(*v33 + 8LL) != v33 )
              goto LABEL_58;
            v46 = (_QWORD *)v33[1];
            if ( (_QWORD *)*v46 != v33 )
              goto LABEL_58;
            *v46 = v45;
            *(_QWORD *)(v45 + 8) = v46;
          }
        }
        v35 = (_QWORD *)v28[3];
        v36 = v35 - 2;
        if ( v35 != i )
        {
          v43 = *((unsigned int *)v36 + 1);
          if ( v28 == (_QWORD *)((char *)v36 + v43) )
          {
            *((_DWORD *)v36 + 1) = *((_DWORD *)v28 + 1) + v43;
            v48 = *v27;
            if ( *(_QWORD **)(*v27 + 8LL) != v27 )
              goto LABEL_58;
            v49 = (_QWORD *)v27[1];
            if ( (_QWORD *)*v49 != v27 )
              goto LABEL_58;
            *v49 = v48;
            v28 = v36;
            *(_QWORD *)(v48 + 8) = v49;
          }
        }
        if ( *(_QWORD *)(v29 + 32) > (unsigned __int64)v28 + *((unsigned int *)v28 + 1) )
        {
LABEL_31:
          KeReleaseSpinLock(&gmutHeap, byte_1C0082868);
          return v3;
        }
        *(_QWORD *)(v29 + 32) = v28;
        v37 = v28 + 2;
        v38 = *v37;
        if ( *(_QWORD **)(*v37 + 8LL) == v37 )
        {
          v39 = (_QWORD *)v37[1];
          if ( (_QWORD *)*v39 == v37 )
          {
            *v39 = v38;
            *(_QWORD *)(v38 + 8) = v39;
            goto LABEL_31;
          }
        }
      }
LABEL_58:
      __fastfail(3u);
    case 1:
      goto LABEL_7;
    case 2:
      goto LABEL_20;
    case 3:
      goto LABEL_23;
  }
  return v3;
}
