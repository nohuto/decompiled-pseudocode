/*
 * XREFs of ??$try_query@UISnapComponent@@@?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UISnapComponent@@Uerr_failfast_policy@wil@@@1@XZ @ 0x18065EBCC
 * Callers:
 *     _lambda_3415c00afb736d6d54203eb8c7c58983_$_ResumeCoro$1::operator() @ 0x180221B40 (_lambda_3415c00afb736d6d54203eb8c7c58983_$_ResumeCoro$1--operator().c)
 * Callees:
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x180062114 (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 */

void **__fastcall wil::com_ptr_t<IWeakReference,wil::err_failfast_policy>::try_query<ISnapComponent>(
        struct IWeakReference **a1,
        void **a2)
{
  struct IWeakReference *v3; // rcx

  v3 = *a1;
  *a2 = 0LL;
  wil::details::weak_query_policy::query(v3, &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab, a2);
  return a2;
}
