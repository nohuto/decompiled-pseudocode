/*
 * XREFs of sub_140A66B0C @ 0x140A66B0C
 * Callers:
 *     sub_140A66300 @ 0x140A66300 (sub_140A66300.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14055A628 @ 0x14055A628 (sub_14055A628.c)
 *     sub_14055AD48 @ 0x14055AD48 (sub_14055AD48.c)
 */

char sub_140A66B0C()
{
  __int64 v0; // rdi
  __int64 v1; // rsi
  void **v2; // rbx
  __int64 v3; // rcx
  unsigned int v4; // eax
  void *v5; // rdx
  int v6; // eax
  __int64 v7; // rax

  v0 = qword_140D018D8;
  v1 = 0LL;
  if ( (*(_DWORD *)(qword_140D018D8 + 80) & 0x80u) != 0 )
    v1 = sub_14055A628(0);
  v2 = (void **)(v0 + 1040);
  v3 = *(_QWORD *)(v0 + 1040);
  if ( v3 )
  {
    *(_DWORD *)(v0 + 1080) = 0;
    *(_QWORD *)(v0 + 1072) = v3;
    sub_14042A5E0(2LL, 0LL);
    v4 = *(_DWORD *)(v0 + 1080);
    if ( v4 && *(_DWORD *)(v0 + 1048) >= v4 )
    {
      v5 = *(void **)(v0 + 1072);
      if ( *v2 != v5 )
      {
        memmove(*v2, v5, v4);
        *(_QWORD *)(v0 + 1072) = *v2;
        v4 = *(_DWORD *)(v0 + 1080);
      }
      if ( v4 && *(_QWORD *)(v0 + 992) )
        sub_14042A5E0(7LL, 0LL);
    }
    else
    {
      *(_QWORD *)(v0 + 1072) = 0LL;
      *(_DWORD *)(v0 + 1080) = 0;
    }
  }
  v6 = *(_DWORD *)(v0 + 80);
  if ( (v6 & 0x80u) != 0 )
  {
    v7 = sub_14055A628(0);
    LOBYTE(v6) = sub_14055AD48((const GUID *)v0, v7 - v1);
  }
  return v6;
}
