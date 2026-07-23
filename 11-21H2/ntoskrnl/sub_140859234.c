/*
 * XREFs of sub_140859234 @ 0x140859234
 * Callers:
 *     sub_1407491AC @ 0x1407491AC (sub_1407491AC.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140859234(__int64 a1)
{
  _QWORD *v1; // rdi
  char v3; // r8
  _QWORD *v4; // r14
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdx

  v1 = *(_QWORD **)(a1 + 720);
  v3 = *((_BYTE *)v1 + 16);
  if ( (v3 & 1) != 0 && (*(_BYTE *)(*v1 + 4LL) & 1) == 0 )
    return 0;
  if ( !byte_140C44638 )
  {
    if ( byte_140C450C8 )
      *((_BYTE *)v1 + 16) = v3 | 2;
    return 0;
  }
  v4 = v1 + 1;
  v5 = sub_14042A5E0(*v1, *(_QWORD *)(a1 + 32));
  if ( v5 >= 0 )
  {
    v6 = v1[3];
    if ( !v6 || (v5 = sub_14042A5E0(v6, *(_QWORD *)(a1 + 32)), v5 >= 0) )
    {
      *((_BYTE *)v1 + 16) |= 2u;
      return (unsigned int)v5;
    }
    sub_14042A5E0(*v4, v7);
    *v4 = 0LL;
  }
  if ( v5 == -1070268391 && (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 48LL) & 0x2000000) != 0 )
    return 0;
  return (unsigned int)v5;
}
