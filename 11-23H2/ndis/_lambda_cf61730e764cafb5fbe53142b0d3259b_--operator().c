/*
 * XREFs of _lambda_cf61730e764cafb5fbe53142b0d3259b_::operator() @ 0x1C011CAAC
 * Callers:
 *     KRegKey::QueryValueBlob__lambda_cf61730e764cafb5fbe53142b0d3259b___ @ 0x1C011B99C (KRegKey--QueryValueBlob__lambda_cf61730e764cafb5fbe53142b0d3259b___.c)
 * Callees:
 *     ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C0035088 (-reserve@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK.c)
 *     ?AddStaticFilterBinding@BindStack@Ndis@@QEAAJAEBU_GUID@@K@Z @ 0x1C011CB6C (-AddStaticFilterBinding@BindStack@Ndis@@QEAAJAEBU_GUID@@K@Z.c)
 */

__int64 __fastcall lambda_cf61730e764cafb5fbe53142b0d3259b_::operator()(
        Ndis::BindStack **a1,
        __int64 a2,
        unsigned int a3)
{
  unsigned int v5; // ebx
  unsigned int v6; // edi
  __int64 result; // rax

  if ( a3 != 18 * (a3 / 0x12uLL) )
    return 3221225485LL;
  v5 = a3 / 0x12;
  if ( a3 / 0x12 > 0x80 )
    return 3221226539LL;
  if ( !Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::reserve(
          &(*a1)->Filters.m_bufferSize,
          v5) )
    return 3221225626LL;
  v6 = 0;
  if ( v5 )
  {
    while ( 1 )
    {
      result = Ndis::BindStack::AddStaticFilterBinding(*a1, (const struct _GUID *)a2, *(unsigned __int16 *)(a2 + 16));
      if ( (_DWORD)result )
        break;
      ++v6;
      a2 += 18LL;
      if ( v6 >= v5 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    ++(*a1)->ChangeEpoch;
    return 0LL;
  }
  return result;
}
