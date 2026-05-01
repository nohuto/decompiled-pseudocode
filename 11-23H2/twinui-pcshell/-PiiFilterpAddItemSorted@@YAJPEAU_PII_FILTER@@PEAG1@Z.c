/*
 * XREFs of ?PiiFilterpAddItemSorted@@YAJPEAU_PII_FILTER@@PEAG1@Z @ 0x1800EE498
 * Callers:
 *     ?PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z @ 0x1800EE140 (-PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z.c)
 * Callees:
 *     ?Insert@RtlNameValueArray@@QEAAJPEBG00_K@Z @ 0x1800EE540 (-Insert@RtlNameValueArray@@QEAAJPEBG00_K@Z.c)
 */

int __fastcall PiiFilterpAddItemSorted(struct _PII_FILTER *this, unsigned __int16 *a2, unsigned __int16 *a3)
{
  unsigned __int64 v3; // r9
  const unsigned __int16 *v5; // rbx
  unsigned __int64 v7; // r11
  unsigned int v8; // r8d
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // kr00_8
  unsigned __int64 v12; // rax
  unsigned __int64 v14; // rcx

  v3 = -1LL;
  v5 = a2;
  do
    ++v3;
  while ( a2[v3] );
  v7 = *((_QWORD *)this + 2);
  v8 = 0;
  if ( v7 )
  {
    v9 = 0LL;
    do
    {
      a2 = 0LL;
      if ( v9 < v7 )
      {
        v11 = v9;
        v10 = *((_QWORD *)this + 1) * v9;
        if ( !is_mul_ok(*((_QWORD *)this + 1), v11)
          || (v14 = *((_QWORD *)this + 5), a2 = (unsigned __int16 *)(v14 + v10), v14 + v10 < v14) )
        {
          a2 = 0LL;
        }
      }
      v12 = -1LL;
      do
        ++v12;
      while ( *(_WORD *)(*(_QWORD *)a2 + 2 * v12) );
      if ( v3 > v12 )
        break;
      v9 = ++v8;
    }
    while ( v8 < v7 );
  }
  return RtlNameValueArray::Insert(this, a2, v5, a3, v8);
}
