/*
 * XREFs of ?GetEntryObject@GdiHandleEntryDirectory@@QEAAPEAVOBJECT@@I@Z @ 0x1C0022B50
 * Callers:
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0025050 (--1SURFMEM@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

struct OBJECT *__fastcall GdiHandleEntryDirectory::GetEntryObject(GdiHandleEntryDirectory *this, unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // r9d
  __int64 v4; // r10
  __int64 v6; // rdx

  v2 = a2;
  v3 = *((_DWORD *)this + 514);
  if ( a2 >= v3 + ((*((unsigned __int16 *)this + 1) + 0xFFFF) << 16) )
    return 0LL;
  if ( a2 >= v3 )
  {
    v6 = ((a2 - v3) >> 16) + 1;
    v4 = *((_QWORD *)this + v6 + 1);
    v2 += ((1 - (_DWORD)v6) << 16) - v3;
  }
  else
  {
    v4 = *((_QWORD *)this + 1);
  }
  if ( v2 >= *(_DWORD *)(v4 + 20) )
    return 0LL;
  else
    return *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v4 + 24) + 8 * ((unsigned __int64)v2 >> 8))
                             + 16LL * (unsigned __int8)v2
                             + 8);
}
