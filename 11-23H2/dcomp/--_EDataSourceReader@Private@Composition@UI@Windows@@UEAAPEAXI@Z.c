/*
 * XREFs of ??_EDataSourceReader@Private@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180123F70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ @ 0x180052E40 (--1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@@std@@@std@@YAXPEAUDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@QEAU123456@AEAV?$allocator@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@@0@@Z @ 0x180122410 (--$_Destroy_range@V-$allocator@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@W.c)
 */

Windows::UI::Composition::Private::DataSourceReader *__fastcall Windows::UI::Composition::Private::DataSourceReader::`vector deleting destructor'(
        Windows::UI::Composition::Private::DataSourceReader *this,
        char a2)
{
  HSTRING *v4; // rcx
  __int64 v5; // rdx

  v4 = (HSTRING *)*((_QWORD *)this + 19);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<Windows::UI::Composition::Private::DataSourceReader::DataSourcePropertyInfo>>(
      v4,
      *((HSTRING **)this + 20));
    std::_Deallocate<16,0>(
      *((void **)this + 19),
      (*((_QWORD *)this + 21) - *((_QWORD *)this + 19)) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
    *((_QWORD *)this + 21) = 0LL;
  }
  *(_QWORD *)this = &Windows::UI::Composition::ProxyObject::`vftable';
  CSparseStorage::~CSparseStorage((void **)this + 14);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v5);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
