/*
 * XREFs of sub_140808CFC @ 0x140808CFC
 * Callers:
 *     sub_14039A210 @ 0x14039A210 (sub_14039A210.c)
 * Callees:
 *     sub_1405D09BC @ 0x1405D09BC (sub_1405D09BC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void sub_140808CFC()
{
  _DWORD *v0; // rbx
  int v1; // ebp
  __int64 *v2; // rdi
  __int64 v3; // r14
  __int16 i; // si
  int v5; // ecx

  v0 = (_DWORD *)_InterlockedExchange64(&qword_140C158A0, 0LL);
  if ( v0 )
  {
    v1 = 0;
    v2 = qword_140003350;
    v3 = 16LL;
    do
    {
      for ( i = 0; (unsigned __int16)i < *(unsigned __int8 *)v2; ++i )
      {
        v5 = v0[v1];
        if ( v5 )
          sub_1405D09BC(v5, i, (const WCHAR *)*(v2 - 2));
        ++v1;
      }
      v2 += 3;
      --v3;
    }
    while ( v3 );
    ExFreePoolWithTag(v0, 0x69547845u);
  }
}
