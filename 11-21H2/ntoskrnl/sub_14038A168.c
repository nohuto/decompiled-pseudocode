/*
 * XREFs of sub_14038A168 @ 0x14038A168
 * Callers:
 *     sub_140A487C0 @ 0x140A487C0 (sub_140A487C0.c)
 * Callees:
 *     sub_14038A2A8 @ 0x14038A2A8 (sub_14038A2A8.c)
 *     sub_14038F620 @ 0x14038F620 (sub_14038F620.c)
 *     sub_140399738 @ 0x140399738 (sub_140399738.c)
 *     sub_14058CCB0 @ 0x14058CCB0 (sub_14058CCB0.c)
 *     sub_140A6A8C0 @ 0x140A6A8C0 (sub_140A6A8C0.c)
 */

__int64 __fastcall sub_14038A168(__int64 *a1)
{
  __int64 v2; // rdi
  int v3; // eax
  _QWORD *v4; // rax
  unsigned __int64 i; // rcx
  _QWORD *j; // rax
  _QWORD **v8; // rax
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rdx
  _QWORD **v11; // rax
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rdx

  v2 = *a1;
  if ( MemoryDescriptorList )
    sub_140A6A8C0(*a1);
  v3 = *((_DWORD *)a1 + 2);
  if ( (v3 & 0x40D) != 0 )
  {
    if ( (v3 & 0x100) != 0 )
    {
      sub_14038A2A8(sub_14058CEF0, a1);
      v3 = *((_DWORD *)a1 + 2);
    }
    if ( (v3 & 0xC0) != 0 )
    {
      sub_14058CCB0(a1);
    }
    else if ( (v3 & 0x100) != 0 )
    {
      sub_14038F620(&StartContext, a1);
    }
    else
    {
      sub_14038A2A8(sub_14038F620, a1);
    }
    v4 = (_QWORD *)qword_140C51DF8;
    i = 0LL;
    while ( v4 )
    {
      i = (unsigned __int64)v4;
      v4 = (_QWORD *)*v4;
    }
    while ( i )
    {
      v8 = *(_QWORD ***)(i + 8);
      v9 = i;
      *(_BYTE *)(i + 71) = 1;
      if ( v8 )
      {
        v10 = *v8;
        for ( i = (unsigned __int64)v8; v10; v10 = (_QWORD *)*v10 )
          i = (unsigned __int64)v10;
      }
      else
      {
        while ( 1 )
        {
          i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !i || *(_QWORD *)i == v9 )
            break;
          v9 = i;
        }
      }
    }
    for ( j = (_QWORD *)qword_140C51DE8; j; j = (_QWORD *)*j )
      i = (unsigned __int64)j;
    while ( i )
    {
      v11 = *(_QWORD ***)(i + 8);
      v12 = i;
      *(_BYTE *)(i + 71) = 1;
      if ( v11 )
      {
        v13 = *v11;
        for ( i = (unsigned __int64)v11; v13; v13 = (_QWORD *)*v13 )
          i = (unsigned __int64)v13;
      }
      else
      {
        while ( 1 )
        {
          i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !i || *(_QWORD *)i == v12 )
            break;
          v12 = i;
        }
      }
    }
  }
  return sub_140399738(v2);
}
