/*
 * XREFs of ??1LwfBindProperties@@QEAA@XZ @ 0x1C00B3580
 * Callers:
 *     ?ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x1C013CF64 (-ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall LwfBindProperties::~LwfBindProperties(LwfBindProperties *this)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x7272414Bu);
    *((_QWORD *)this + 5) = 0LL;
    *((_DWORD *)this + 9) = 0;
    *((_DWORD *)this + 8) = 0;
  }
  v3 = (void *)*((_QWORD *)this + 3);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x7272414Bu);
    *((_QWORD *)this + 3) = 0LL;
    *((_DWORD *)this + 5) = 0;
    *((_DWORD *)this + 4) = 0;
  }
}
