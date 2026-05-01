/*
 * XREFs of ??0ITaggableTarget@@QEAA@XZ @ 0x18059A3AC
 * Callers:
 *     ??0CAppTransitionTargetBase@@QEAA@XZ @ 0x18059A1AC (--0CAppTransitionTargetBase@@QEAA@XZ.c)
 * Callees:
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x180100920 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 */

ITaggableTarget *__fastcall ITaggableTarget::ITaggableTarget(ITaggableTarget *this)
{
  IApplicationViewChangeListener::IApplicationViewChangeListener(this);
  *(_QWORD *)this = &Windows::Foundation::Collections::IIterable<unsigned int>::`vftable';
  return this;
}
