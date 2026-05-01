/*
 * XREFs of ??$load_nothrow@VStoredFailureInfo@wil@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@Z @ 0x18046323C
 * Callers:
 *     ?deserialize_data@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@@Z @ 0x18046BF0C (-deserialize_data@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18016B8F0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?clear@?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAAXXZ @ 0x1801B17E8 (-clear@-$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAAXXZ.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x18046BD20 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 *     ?finishNode@input_archive@tson@@QEAAXXZ @ 0x18046CAC4 (-finishNode@input_archive@tson@@QEAAXXZ.c)
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAVStoredFailureInfo@wil@@@Z @ 0x18046D188 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAVStoredFailureInfo@wil@@@Z.c)
 *     ?push_back@?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAA_N$$QEAVStoredFailureInfo@wil@@@Z @ 0x18046D5C0 (-push_back@-$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAA_N$$QEAVStoredFailureInfo@wil@@@Z.c)
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x18046E058 (-startNode@input_archive@tson@@QEAAXXZ.c)
 */

void __fastcall tson::load_nothrow<wil::StoredFailureInfo>(tson *this, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  tson::read_buffer *v7; // rcx
  struct wil::StoredFailureInfo *v8; // r8
  _BYTE v9[152]; // [rsp+20h] [rbp-B8h] BYREF
  volatile signed __int32 *v10[3]; // [rsp+B8h] [rbp-20h] BYREF
  unsigned __int16 v11; // [rsp+E0h] [rbp+8h] BYREF

  v4 = 0LL;
  if ( !*((_BYTE *)this + 25) )
  {
    v5 = *((_QWORD *)this + 17);
    if ( v5 )
    {
      v6 = 4 * v5;
    }
    else
    {
      *((_BYTE *)this + 32) = 1;
      v6 = 4LL;
    }
    if ( *(_DWORD *)((char *)this + v6 + 32) != 1 && *((int *)this + 2) >= 0 )
      *((_DWORD *)this + 2) = -2147023267;
    v7 = *(tson::read_buffer **)this;
    v11 = 0;
    tson::read_buffer::consume_n(v7, &v11, 2uLL);
    v4 = v11;
  }
  tip2::vector_nothrow<wil::StoredFailureInfo>::clear(a2, (unsigned int)a2);
  for ( ; v4; --v4 )
  {
    v10[0] = 0LL;
    v10[1] = 0LL;
    memset_0(v9, 0, sizeof(v9));
    tson::input_archive::startNode(this);
    tson::load_nothrow(this, (struct tson::input_archive *)v9, v8);
    tson::input_archive::finishNode(this);
    tip2::vector_nothrow<wil::StoredFailureInfo>::push_back(a2, v9);
    wil::details::shared_buffer::reset(v10);
  }
}
