/*
 * XREFs of ?ndisCollectHistogramsForIoctl@@YAJW4NDIS_HISTOGRAM_TYPE@@_NPEAEKAEAK@Z @ 0x1C0122A88
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C0139008 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     KLoaderDereferenceModule @ 0x1C00CB0D0 (KLoaderDereferenceModule.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C010C60C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C010C668 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ndisHistogramDeleteAllEntries @ 0x1C0122F64 (ndisHistogramDeleteAllEntries.c)
 *     ?Initialize@ExecutionContextLibrary@@QEAAJXZ @ 0x1C0134B84 (-Initialize@ExecutionContextLibrary@@QEAAJXZ.c)
 */

__int64 __fastcall ndisCollectHistogramsForIoctl(int a1, char a2, wchar_t *a3, unsigned int a4, unsigned int *a5)
{
  unsigned int v5; // ebx
  size_t v6; // rdi
  unsigned int v10; // ebp
  _DWORD *v11; // r15
  unsigned __int64 v12; // rbp
  __int64 v13; // rdx
  unsigned int v14; // r12d
  unsigned __int64 v15; // rcx
  unsigned int v16; // ecx
  _DWORD *v17; // rax
  unsigned int v18; // r14d
  _QWORD *i; // rdi
  __int64 v20; // rcx
  __int64 v21; // rdx
  _QWORD *v22; // rdi
  __int64 v23; // rcx
  _DWORD *v24; // rax
  __int64 v25; // rcx
  signed __int32 v26[8]; // [rsp+0h] [rbp-E8h] BYREF
  KLockHolder v27; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v28[96]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 (__fastcall *v29)(wchar_t *, _QWORD, unsigned int *); // [rsp+A0h] [rbp-48h]
  void (*v30)(void); // [rsp+A8h] [rbp-40h]
  struct KLOADER_MODULE_REFERENCE__ *v31; // [rsp+B0h] [rbp-38h]

  v5 = 0;
  v6 = a4;
  if ( !a1 )
  {
    *a5 = 320;
    v27.m_Lock = (KPushLockBase *)&qword_1C00ECD48;
    v27.m_State = Unlocked;
    v27.m_Region.m_Entered = 0;
    KLockHolder::AcquireExclusive(&v27);
    v11 = qword_1C00EE648;
    if ( qword_1C00EE648 )
    {
      v12 = 2LL * *((unsigned int *)qword_1C00EE648 + 8);
      if ( v12 <= 0xFFFFFFFF )
      {
        v13 = (unsigned int)(v12 + 288);
        if ( (unsigned int)v13 >= (unsigned int)v12 && (unsigned int)v13 <= ((v13 + 295) & 0xFFFFFFFFFFFFFED8uLL) )
        {
          v14 = (v12 + 583) & 0xFFFFFED8;
          v15 = v14 * (unsigned __int64)*((unsigned int *)qword_1C00EE648 + 4);
          if ( v15 <= 0xFFFFFFFF )
          {
            v16 = *a5 + v15;
            if ( v16 >= *a5 )
            {
              *a5 = v16;
              if ( v16 <= (unsigned int)v6 )
              {
                memset(a3, 0, v16);
                *(_DWORD *)a3 = v11[4];
                *((_DWORD *)a3 + 1) = v14;
                *((_QWORD *)a3 + 3) = (unsigned int)v11[9];
                *((_DWORD *)a3 + 3) = v11[8];
                *((_QWORD *)a3 + 2) = (unsigned int)v11[7];
                wcscpy_s(a3 + 32, 0x80uLL, L"DMA allocation times");
                v17 = qword_1C00EE648;
                v18 = 0;
                for ( i = *(_QWORD **)qword_1C00EE648; i != (_QWORD *)v17 && v18 < v17[4]; i = (_QWORD *)*i )
                {
                  v20 = v14 * v18++;
                  *(_QWORD *)((char *)a3 + v20 + 320) = *(i - 2) / 0xAuLL;
                  *(_DWORD *)((char *)a3 + v20 + 332) = 1;
                  *(_DWORD *)((char *)a3 + v20 + 336) = *((_DWORD *)i - 2);
                  *(wchar_t *)((char *)a3 + v20 + 340) = *((_WORD *)i - 2);
                  v21 = i[2];
                  _InterlockedOr(v26, 0);
                  memmove((char *)a3 + v20 + 608, (const void *)(v21 + 20), (unsigned int)v12);
                  v17 = qword_1C00EE648;
                }
                if ( a2 )
                {
                  v22 = *(_QWORD **)v17;
                  if ( *(_DWORD **)v17 != v17 )
                  {
                    if ( (_DWORD *)v22[1] != v17 )
                      goto LABEL_33;
                    v23 = *v22;
                    if ( *(_QWORD **)(*v22 + 8LL) != v22 )
                      goto LABEL_33;
                    *(_QWORD *)v17 = v23;
                    *(_QWORD *)(v23 + 8) = v17;
                    ndisHistogramDeleteAllEntries();
                    memset((void *)(v22[2] + 20LL), 0, 2LL * *(unsigned int *)(v22[2] + 16LL));
                    _InterlockedOr(v26, 0);
                    *(v22 - 2) = MEMORY[0xFFFFF78000000008];
                    v24 = qword_1C00EE648;
                    v25 = *(_QWORD *)qword_1C00EE648;
                    if ( *(PVOID *)(*(_QWORD *)qword_1C00EE648 + 8LL) != qword_1C00EE648 )
LABEL_33:
                      __fastfail(3u);
                    *v22 = v25;
                    v22[1] = v24;
                    *(_QWORD *)(v25 + 8) = v22;
                    *(_QWORD *)v24 = v22;
                    ++v24[4];
                  }
                }
                goto LABEL_36;
              }
              goto LABEL_13;
            }
            *a5 = -1;
          }
        }
      }
      v5 = -1073741675;
    }
    else
    {
      if ( *a5 > (unsigned int)v6 )
      {
LABEL_13:
        if ( (_DWORD)v6 )
          memset(a3, 0, v6);
        v5 = -2147483643;
        goto LABEL_36;
      }
      memset(a3, 0, *a5);
      wcscpy_s(a3 + 32, 0x80uLL, L"DMA allocation times");
    }
LABEL_36:
    KLockHolder::~KLockHolder(&v27);
    return v5;
  }
  if ( a1 != 1 )
    return 3221226224LL;
  v31 = 0LL;
  v10 = ExecutionContextLibrary::Initialize((ExecutionContextLibrary *)v28);
  if ( !v10 )
  {
    v10 = v29(a3, (unsigned int)v6, a5);
    if ( !v10 )
    {
      if ( a2 )
        v30();
    }
  }
  if ( v31 )
    KLoaderDereferenceModule(v31);
  return v10;
}
