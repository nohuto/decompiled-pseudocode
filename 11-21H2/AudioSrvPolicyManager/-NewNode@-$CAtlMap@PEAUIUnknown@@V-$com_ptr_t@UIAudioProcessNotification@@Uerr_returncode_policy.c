/*
 * XREFs of ?NewNode@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@AEAAPEAVCNode@12@AEBQEAUIUnknown@@II@Z @ 0x180018BFC
 * Callers:
 *     ?SetAt@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIUnknown@@AEBV?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18001BEEC (-SetAt@-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@w.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000958C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?PickSize@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@AEBAI_K@Z @ 0x180019210 (-PickSize@-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_polic.c)
 *     ?Rehash@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@QEAAXI@Z @ 0x18001A5CC (-Rehash@-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@.c)
 */

__int64 __fastcall ATL::CAtlMap<IUnknown *,wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>>>::NewNode(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        int a4)
{
  __int64 v5; // r15
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rax
  int v10; // r8d
  _QWORD *i; // rcx
  __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  unsigned int v14; // eax

  v5 = a3;
  if ( !*(_QWORD *)(a1 + 64) )
  {
    v8 = *(unsigned int *)(a1 + 52);
    if ( v8 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v8 < 0x20 )
        goto LABEL_15;
      v8 *= 32LL;
    }
    v9 = malloc(v8 + 8);
    if ( v9 )
    {
      *v9 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(a1 + 56) = v9;
      v10 = *(_DWORD *)(a1 + 52);
      for ( i = &v9[4 * (unsigned int)(v10 - 1) + 1]; --v10 >= 0; i -= 4 )
      {
        i[2] = *(_QWORD *)(a1 + 64);
        *(_QWORD *)(a1 + 64) = i;
      }
      goto LABEL_9;
    }
LABEL_15:
    ATL::AtlThrowImpl(-2147024882);
  }
LABEL_9:
  v12 = *(_QWORD *)(a1 + 64);
  if ( !v12 )
    ATL::AtlThrowImpl(-2147467259);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(v12 + 16);
  *(_QWORD *)v12 = *a2;
  *(_QWORD *)(v12 + 8) = 0LL;
  *(_DWORD *)(v12 + 24) = a4;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(v12 + 16) = *(_QWORD *)(*(_QWORD *)a1 + 8 * v5);
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = v12;
  v13 = *(_QWORD *)(a1 + 8);
  if ( v13 > *(_QWORD *)(a1 + 32) && !*(_DWORD *)(a1 + 48) )
  {
    v14 = ATL::CAtlMap<IUnknown *,wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>>>::PickSize(
            a1,
            v13);
    ATL::CAtlMap<IUnknown *,wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>>>::Rehash(
      a1,
      v14);
  }
  return v12;
}
