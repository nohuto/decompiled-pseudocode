/*
 * XREFs of sub_140863A40 @ 0x140863A40
 * Callers:
 *     <none>
 * Callees:
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     sub_140848BE8 @ 0x140848BE8 (sub_140848BE8.c)
 */

__int64 __fastcall sub_140863A40(_QWORD *a1, int *a2, int a3)
{
  __int64 v3; // r9
  unsigned int v4; // ebx
  int v5; // edi

  v3 = 0x4823F10C7F2F5CFALL - *a1;
  if ( *a1 == 0x4823F10C7F2F5CFALL )
    v3 = 0xB5465FE83AE9E1B5uLL - a1[1];
  v4 = 0;
  if ( !v3 && a3 == 4 && a2 )
  {
    v5 = *a2;
    if ( (unsigned int)*a2 > 4 )
      v5 = 0;
    sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
    if ( v5 == dword_140D05268 )
      goto LABEL_9;
    dword_140D05268 = v5;
    if ( ((dword_140D0696C - 1) & 0xFFFFFFFA) != 0 || dword_140D0696C == 6 )
      v5 = 0;
    if ( v5 == dword_140D05054 )
    {
LABEL_9:
      sub_140224C00(&qword_140C22FE0);
    }
    else
    {
      dword_140D05054 = v5;
      sub_140848BE8(1);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
