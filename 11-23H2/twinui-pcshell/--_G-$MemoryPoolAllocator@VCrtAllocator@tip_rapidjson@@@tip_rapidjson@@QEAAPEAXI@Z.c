/*
 * XREFs of ??_G?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@tip_rapidjson@@QEAAPEAXI@Z @ 0x18018D414
 * Callers:
 *     ??1?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@tip_rapidjson@@QEAA@XZ @ 0x18018D3D4 (--1-$GenericDocument@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>::`scalar deleting destructor'(
        void *a1)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rcx

  v1 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_QWORD **)a1;
    do
    {
      if ( v3 == *((_QWORD **)a1 + 2) )
        break;
      v1 = (_QWORD *)v3[2];
      free(v3);
      *(_QWORD *)a1 = v1;
      v3 = v1;
    }
    while ( v1 );
    if ( v1 && v1 == *((_QWORD **)a1 + 2) )
      v1[1] = 0LL;
  }
  operator delete(*((void **)a1 + 4), 1uLL);
  operator delete(a1, 0x28uLL);
  return a1;
}
