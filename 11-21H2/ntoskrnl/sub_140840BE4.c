/*
 * XREFs of sub_140840BE4 @ 0x140840BE4
 * Callers:
 *     sub_14083FE80 @ 0x14083FE80 (sub_14083FE80.c)
 * Callees:
 *     sub_140816288 @ 0x140816288 (sub_140816288.c)
 */

void sub_140840BE4()
{
  __int64 v0; // rdi
  unsigned __int16 v1; // bp
  unsigned __int16 i; // si
  __int64 v3; // rbx
  __int64 v4; // rax

  v0 = 0LL;
  v1 = _InterlockedExchange(&dword_140C18E94, dword_140C18E94);
  for ( i = _InterlockedExchange(&dword_140C18E98, dword_140C18E98);
        (unsigned int)v0 < dword_140C18E80;
        v0 = (unsigned int)(v0 + 1) )
  {
    v3 = qword_140C16E80[v0];
    v4 = *(_QWORD *)v3 - 0x4700CB902FF3E6B7LL;
    if ( *(_QWORD *)v3 == 0x4700CB902FF3E6B7LL )
      v4 = *(_QWORD *)(v3 + 8) + 0x12CB68C7C0BBDE6ALL;
    if ( v4 && *(_DWORD *)(v3 + 40) && *(_BYTE *)(v3 + 36) )
    {
      if ( (int)sub_140816288(
                  v1,
                  qword_140C16E80[v0],
                  *(_BYTE *)(v3 + 16),
                  *(_QWORD *)(v3 + 24),
                  *(_DWORD *)(v3 + 32),
                  1) < 0 )
      {
        *(_OWORD *)(v3 + 16) = 0LL;
        *(_OWORD *)(v3 + 32) = 0LL;
        *(_OWORD *)(v3 + 48) = 0LL;
        *(_OWORD *)(v3 + 64) = 0LL;
      }
      else
      {
        *(_BYTE *)(v3 + 37) = 1;
        if ( *(_BYTE *)(v3 + 68) )
        {
          if ( (int)sub_140816288(i, v3, *(_BYTE *)(v3 + 48), *(_QWORD *)(v3 + 56), *(_DWORD *)(v3 + 64), 1) < 0 )
          {
            *(_OWORD *)(v3 + 48) = 0LL;
            *(_OWORD *)(v3 + 64) = 0LL;
          }
          else
          {
            *(_BYTE *)(v3 + 69) = 1;
          }
        }
      }
    }
  }
}
