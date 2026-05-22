/*
 * XREFs of ??$GetSharedData@G@SharedSectionWrapper@Composition@UI@Windows@@QEAA?AV?$span@$$CBG$0?0@gsl@@XZ @ 0x180131D10
 * Callers:
 *     ?UpdateBounds@SceneMesh@Scenes@Composition@UI@Windows@@AEAAXXZ @ 0x180132B84 (-UpdateBounds@SceneMesh@Scenes@Composition@UI@Windows@@AEAAXXZ.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180086BFC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 */

gsl::details *__fastcall Windows::UI::Composition::SharedSectionWrapper::GetSharedData<unsigned short>(
        __int64 a1,
        gsl::details *a2)
{
  __int64 v3; // rdi
  gsl::details *v4; // rcx
  bool v5; // zf

  v3 = *(_QWORD *)(a1 + 136) + 56LL;
  gsl::details::extent_type<-1>::extent_type<-1>(a2, *(_QWORD *)(a1 + 152) >> 1);
  v5 = *(_QWORD *)a2 == -1LL;
  *((_QWORD *)a2 + 1) = v3;
  if ( v5 || !v3 && *(_QWORD *)a2 )
  {
    gsl::details::terminate(v4);
    JUMPOUT(0x180131D62LL);
  }
  return a2;
}
