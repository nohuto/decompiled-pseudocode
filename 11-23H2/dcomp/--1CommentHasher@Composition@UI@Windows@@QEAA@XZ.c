/*
 * XREFs of ??1CommentHasher@Composition@UI@Windows@@QEAA@XZ @ 0x180084E80
 * Callers:
 *     ??1AnimationLoggingManager@Composition@UI@Windows@@UEAA@XZ @ 0x180084D44 (--1AnimationLoggingManager@Composition@UI@Windows@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall Windows::UI::Composition::CommentHasher::~CommentHasher(Windows::UI::Composition::CommentHasher *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = *(void **)this;
  if ( v2 )
    BCryptCloseAlgorithmProvider(v2, 0);
  v3 = (void *)*((_QWORD *)this + 1);
  if ( v3 )
    BCryptDestroyHash(v3);
  v4 = (void *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, *((_QWORD *)this + 4) - (_QWORD)v4);
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
}
