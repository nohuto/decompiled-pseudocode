/*
 * XREFs of sub_140AF5D1C @ 0x140AF5D1C
 * Callers:
 *     sub_140AF4DB0 @ 0x140AF4DB0 (sub_140AF4DB0.c)
 * Callees:
 *     sub_140AF5F74 @ 0x140AF5F74 (sub_140AF5F74.c)
 */

_BOOL8 __fastcall sub_140AF5D1C(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r15
  int v3; // edi
  ULONG_PTR v4; // r9
  unsigned __int64 v5; // rcx
  _QWORD *v6; // rcx
  __int64 i; // rcx
  int v9; // r14d
  unsigned __int64 v10; // rsi
  int v11; // eax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rbx

  v1 = *(_QWORD *)(a1 + 360);
  v2 = 0LL;
  v3 = 3;
  v4 = -1LL;
  if ( (v1 & 1) != 0 )
  {
    if ( v1 == 1 )
      return (unsigned int)sub_140AF5F74(qword_140C50840 + 1)
          && (qword_140C52CE0 == qword_140C50840 + 1 || (unsigned int)sub_140AF5F74(qword_140C52CE0));
    v14 = v1 ^ ((a1 + 352) | 1);
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 360);
  }
  if ( v14 )
  {
    for ( i = 0x5C5C0C00048LL; ; i = 0x5C5C0C00048LL )
    {
      v9 = *(_DWORD *)(v14 + 24);
      v10 = v9 & 0x1FFFFFFF;
      if ( (unsigned int)v10 > 0x2A || !_bittest64(&i, (unsigned int)v10) )
        break;
      if ( v4 != -1LL )
        goto LABEL_34;
LABEL_31:
      v12 = *(_QWORD **)(v14 + 8);
      v5 = v14;
      if ( v12 )
      {
        v6 = (_QWORD *)*v12;
        v14 = *(_QWORD *)(v14 + 8);
        if ( *v12 )
        {
          do
          {
            v14 = (unsigned __int64)v6;
            v6 = (_QWORD *)*v6;
          }
          while ( v6 );
        }
      }
      else
      {
        while ( 1 )
        {
          v14 = *(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v14 || *(_QWORD *)v14 == v5 )
            break;
          v5 = v14;
        }
      }
      if ( !v14 )
      {
        if ( v4 == -1LL || (unsigned int)sub_140AF5F74(v4) )
          return (unsigned int)sub_140AF5F74(qword_140C50840 + 1)
              && (qword_140C52CE0 == qword_140C50840 + 1 || (unsigned int)sub_140AF5F74(qword_140C52CE0));
        return 0LL;
      }
    }
    if ( v4 == -1LL )
    {
      v4 = *(_QWORD *)(v14 + 32);
LABEL_38:
      v2 = *(_QWORD *)(v14 + 40);
      v3 = v9;
      goto LABEL_31;
    }
    if ( v4 + v2 != *(_QWORD *)(v14 + 32) )
      goto LABEL_34;
    if ( (v3 & 0x20000000) == 0 || (v11 = v3 & 0x1FFFFFFF, (v3 & 0x1FFFFFFF) == 2) || v11 == 24 )
    {
      if ( (v9 & 0x20000000) == 0 || (_DWORD)v10 == 2 || (_DWORD)v10 == 24 )
      {
LABEL_30:
        v2 += *(_QWORD *)(v14 + 40);
        goto LABEL_31;
      }
      v11 = v3 & 0x1FFFFFFF;
    }
    if ( (v3 & 0x20000000) == 0
      || v11 == 2
      || v11 == 24
      || (v9 & 0x20000000) == 0
      || (_DWORD)v10 == 2
      || (_DWORD)v10 == 24 )
    {
LABEL_34:
      if ( !(unsigned int)sub_140AF5F74(v4) )
        return 0LL;
      if ( (unsigned int)v10 <= 0x2A )
      {
        v13 = 0x5C5C0C00048LL;
        if ( _bittest64(&v13, v10) )
        {
          v4 = -1LL;
          goto LABEL_31;
        }
      }
      v4 = *(_QWORD *)(v14 + 32);
      goto LABEL_38;
    }
    goto LABEL_30;
  }
  return (unsigned int)sub_140AF5F74(qword_140C50840 + 1)
      && (qword_140C52CE0 == qword_140C50840 + 1 || (unsigned int)sub_140AF5F74(qword_140C52CE0));
}
