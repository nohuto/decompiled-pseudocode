/*
 * XREFs of ?Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z @ 0x180007EF8
 * Callers:
 *     ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x180007E04 (-Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001C7F0 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001CA60 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x180020AB8 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     memcpy_s @ 0x180025BEC (memcpy_s.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800C5788 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 __fastcall CAppAudioSessionId::Copy(CAppAudioSessionId *this, const struct CAppAudioSessionId *a2)
{
  __int64 v4; // rdx
  int *v5; // rdi
  __int64 v6; // rdx
  int *v7; // rdi
  _QWORD *v8; // r15
  char *v9; // r14
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rsi
  __int64 (__fastcall ***v12)(_QWORD, _QWORD, __int64); // rax
  __int64 v14; // r14
  __int64 v15; // r15
  _DWORD *v16; // r12
  __int64 v17; // rax

  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  v4 = *(_QWORD *)a2;
  v5 = (int *)(*(_QWORD *)this - 24LL);
  if ( (int *)(v4 - 24) != v5 )
  {
    if ( v5[4] >= 0 && *(_QWORD *)(v4 - 24) == *(_QWORD *)v5 )
    {
      v14 = ATL::CSimpleStringT<unsigned short,0>::CloneData();
      ATL::CStringData::Release((ATL::CStringData *)v5);
      *(_QWORD *)this = v14 + 24;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(this, v4, *(unsigned int *)(v4 - 16));
    }
  }
  v6 = *((_QWORD *)a2 + 1);
  v7 = (int *)(*((_QWORD *)this + 1) - 24LL);
  if ( (int *)(v6 - 24) != v7 )
  {
    if ( v7[4] >= 0 && *(_QWORD *)(v6 - 24) == *(_QWORD *)v7 )
    {
      v15 = ATL::CSimpleStringT<unsigned short,0>::CloneData();
      ATL::CStringData::Release((ATL::CStringData *)v7);
      *((_QWORD *)this + 1) = v15 + 24;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((char *)this + 8, v6, *(unsigned int *)(v6 - 16));
    }
  }
  *((_DWORD *)this + 10) = *((_DWORD *)a2 + 10);
  v8 = (_QWORD *)((char *)this + 32);
  v9 = (char *)*((_QWORD *)a2 + 4);
  v10 = (volatile signed __int32 *)(v9 - 24);
  v11 = (volatile signed __int32 *)(*v8 - 24LL);
  if ( v9 - 24 != (char *)v11 )
  {
    if ( *((int *)v11 + 4) >= 0 && *(_QWORD *)v10 == *(_QWORD *)v11 )
    {
      v12 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v10
                                                                                                 + 32LL))(*(_QWORD *)v10);
      if ( *((int *)v10 + 4) >= 0 && v12 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v10 )
      {
        _InterlockedIncrement(v10 + 4);
      }
      else
      {
        v16 = v10 + 2;
        v17 = (**v12)(v12, *((unsigned int *)v10 + 2), 2LL);
        v10 = (volatile signed __int32 *)v17;
        if ( !v17 )
          ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
        *(_DWORD *)(v17 + 8) = *v16;
        memcpy_s((void *const)(v17 + 24), 2LL * (*v16 + 1), v9, 2LL * (*v16 + 1));
      }
      if ( _InterlockedExchangeAdd(v11 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v11 + 8LL))(*(_QWORD *)v11, v11);
      *v8 = v10 + 6;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(v8, v9, *((unsigned int *)v9 - 4));
    }
  }
  return 0LL;
}
