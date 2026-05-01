/*
 * XREFs of ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18006AA50
 * Callers:
 *     ??$make_unique_nothrow@VCUndockedMiniSearchAppExperienceManagerConfig@@AEBK@wil@@YA?AV?$unique_ptr@VCUndockedMiniSearchAppExperienceManagerConfig@@U?$default_delete@VCUndockedMiniSearchAppExperienceManagerConfig@@@wistd@@@wistd@@AEBK@Z @ 0x18005DF24 (--$make_unique_nothrow@VCUndockedMiniSearchAppExperienceManagerConfig@@AEBK@wil@@YA-AV-$unique_p.c)
 *     ??0TouchKeyboardExperienceManager@@QEAA@XZ @ 0x18006A3D8 (--0TouchKeyboardExperienceManager@@QEAA@XZ.c)
 *     ?OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180144C6C (-OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Fou.c)
 *     ??0UndockedSearchAppExperienceManager@@QEAA@XZ @ 0x1801586E0 (--0UndockedSearchAppExperienceManager@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

Microsoft::WRL::WeakRef *__fastcall Microsoft::WRL::WeakRef::WeakRef(Microsoft::WRL::WeakRef *this)
{
  *(_QWORD *)this = 0LL;
  return this;
}
