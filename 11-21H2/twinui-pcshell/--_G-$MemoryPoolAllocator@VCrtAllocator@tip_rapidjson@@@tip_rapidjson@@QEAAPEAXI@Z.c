/*
 * XREFs of ??_G?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@tip_rapidjson@@QEAAPEAXI@Z @ 0x18034D7AC
 * Callers:
 *     ??1?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@tip_rapidjson@@QEAA@XZ @ 0x18034C744 (--1-$GenericDocument@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>::`scalar deleting destructor'(
        void *a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx

  v2 = *(_QWORD **)a1;
  if ( v2 )
  {
    v3 = v2;
    do
    {
      if ( v2 == *((_QWORD **)a1 + 2) )
        break;
      v3 = (_QWORD *)v2[2];
      free(v2);
      *(_QWORD *)a1 = v3;
      v2 = v3;
    }
    while ( v3 );
    if ( v3 && v3 == *((_QWORD **)a1 + 2) )
      v3[1] = 0LL;
  }
  operator delete(*((void **)a1 + 4));
  operator delete(a1);
  return a1;
}
