/*
 * XREFs of ?Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z @ 0x18000B684
 * Callers:
 *     ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x18000B540 (-Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x1800194A4 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001CD18 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppAudioSessionId::Copy(CAppAudioSessionId *this, const struct CAppAudioSessionId *a2)
{
  __int64 v4; // rdx
  volatile signed __int32 *v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rdx
  volatile signed __int32 *v8; // rbx
  __int64 v9; // r15
  _QWORD *v10; // r14
  __int64 v11; // rdx
  volatile signed __int32 *v12; // rdi
  __int64 v13; // rsi

  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  v4 = *(_QWORD *)a2;
  v5 = (volatile signed __int32 *)(*(_QWORD *)this - 24LL);
  if ( (volatile signed __int32 *)(v4 - 24) != v5 )
  {
    if ( *((int *)v5 + 4) >= 0 && *(_QWORD *)(v4 - 24) == *(_QWORD *)v5 )
    {
      v6 = ATL::CSimpleStringT<unsigned short,0>::CloneData();
      if ( _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v5 + 8LL))(*(_QWORD *)v5, v5);
      *(_QWORD *)this = v6 + 24;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(this, v4, *(unsigned int *)(v4 - 16));
    }
  }
  v7 = *((_QWORD *)a2 + 1);
  v8 = (volatile signed __int32 *)(*((_QWORD *)this + 1) - 24LL);
  if ( (volatile signed __int32 *)(v7 - 24) != v8 )
  {
    if ( *((int *)v8 + 4) >= 0 && *(_QWORD *)(v7 - 24) == *(_QWORD *)v8 )
    {
      v9 = ATL::CSimpleStringT<unsigned short,0>::CloneData();
      if ( _InterlockedExchangeAdd(v8 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v8 + 8LL))(*(_QWORD *)v8, v8);
      *((_QWORD *)this + 1) = v9 + 24;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((char *)this + 8, v7, *(unsigned int *)(v7 - 16));
    }
  }
  *((_DWORD *)this + 10) = *((_DWORD *)a2 + 10);
  v10 = (_QWORD *)((char *)this + 32);
  v11 = *((_QWORD *)a2 + 4);
  v12 = (volatile signed __int32 *)(*((_QWORD *)this + 4) - 24LL);
  if ( (volatile signed __int32 *)(v11 - 24) != v12 )
  {
    if ( *((int *)v12 + 4) >= 0 && *(_QWORD *)(v11 - 24) == *(_QWORD *)v12 )
    {
      v13 = ATL::CSimpleStringT<unsigned short,0>::CloneData();
      if ( _InterlockedExchangeAdd(v12 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v12 + 8LL))(*(_QWORD *)v12, v12);
      *v10 = v13 + 24;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(v10, v11, *(unsigned int *)(v11 - 16));
    }
  }
  return 0LL;
}
