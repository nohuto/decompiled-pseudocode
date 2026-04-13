/*
 * XREFs of ??0?$_Ref_count_obj@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@XZ @ 0x180056034
 * Callers:
 *     ??$make_shared@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@0@XZ @ 0x180054BF0 (--$make_shared@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@YA-AV-$shared_.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004094 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002245D (memset_0.c)
 *     ??$Base64Encode@$0IB@@TLV@@YAXPEBE_KAEAY0IB@D@Z @ 0x180051E88 (--$Base64Encode@$0IB@@TLV@@YAXPEBE_KAEAY0IB@D@Z.c)
 *     ?UpdateStringRepresentation@CorrelationVectorWrapper@Background@ContentDeliveryManager@@AEAAXXZ @ 0x18006673C (-UpdateStringRepresentation@CorrelationVectorWrapper@Background@ContentDeliveryManager@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Ref_count_obj<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Ref_count_obj<ContentDeliveryManager::Background::CorrelationVectorWrapper>(
        __int64 a1)
{
  UUID *v2; // rdi
  _BYTE *v3; // rax
  __int64 v4; // rbx
  void *v5; // rcx
  UUID Uuid; // [rsp+30h] [rbp-28h] BYREF

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<ContentDeliveryManager::Background::CorrelationVectorWrapper>::`vftable';
  v2 = (UUID *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  v3 = operator new(0x90uLL);
  v4 = (__int64)v3;
  *(_QWORD *)&Uuid.Data1 = v3;
  if ( v3 )
  {
    v3[130] = 65;
    Uuid = 0LL;
    UuidCreate(&Uuid);
    *(_BYTE *)(v4 + 129) = 17;
    *(_QWORD *)(v4 + 136) = 0x1300000000LL;
    memset_0((void *)v4, 0, 0x81uLL);
    TLV::Base64Encode<129>((unsigned __int8 *)&Uuid, 0xCuLL, v4);
    *(_WORD *)(v4 + 16) = 46;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v2 == &Uuid )
  {
    if ( v4 )
      operator delete((void *)v4);
  }
  else
  {
    v5 = *(void **)&v2->Data1;
    if ( v4 != *(_QWORD *)&v2->Data1 )
    {
      if ( v5 )
        operator delete(v5);
      *(_QWORD *)&v2->Data1 = v4;
    }
  }
  ContentDeliveryManager::Background::CorrelationVectorWrapper::UpdateStringRepresentation((ContentDeliveryManager::Background::CorrelationVectorWrapper *)v2);
  return a1;
}
