/*
 * XREFs of sub_140659AD4 @ 0x140659AD4
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     sub_14025302C @ 0x14025302C (sub_14025302C.c)
 *     sub_1402A0880 @ 0x1402A0880 (sub_1402A0880.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_140419D6C @ 0x140419D6C (sub_140419D6C.c)
 *     sub_140419E5C @ 0x140419E5C (sub_140419E5C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406595AC @ 0x1406595AC (sub_1406595AC.c)
 */

__int64 __fastcall sub_140659AD4(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rax
  struct _EX_RUNDOWN_REF *v6; // rbx
  struct _EX_RUNDOWN_REF *v7; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  volatile signed __int32 *i; // rax
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+28h] [rbp-10h]
  int v13; // [rsp+2Ch] [rbp-Ch]
  struct _EX_RUNDOWN_REF *v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0LL;
  if ( (*(_DWORD *)(a1 + 2172) & 1) != 0 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    v4 = sub_140419E5C(a2, (__int64)&v14);
    if ( v4 >= 0 )
    {
      v5 = *(unsigned __int8 *)(a2 + 16);
      if ( (_BYTE)v5 || HIDWORD(v14[v5 + 11].Ptr) == -1 )
      {
        v4 = -1073741811;
      }
      else if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 2172), 0x19u) )
      {
        v4 = -1073741823;
      }
      else
      {
        if ( *(_QWORD *)(a1 + 2896) )
        {
          v4 = -1073741790;
        }
        else
        {
          v6 = v14;
          v7 = v14 + 7;
          if ( sub_140347810(v14 + 7) )
          {
            v13 = 0;
            if ( !v6[5].Count
              || (v11 = *(_QWORD *)(a1 + 1344),
                  v12 = *(unsigned __int8 *)(a2 + 16),
                  v4 = sub_14042A5E0(a1, &v11),
                  v4 >= 0) )
            {
              CurrentThread = KeGetCurrentThread();
              sub_1402A0880(a1, (__int64)CurrentThread);
              sub_1406595AC((_QWORD *)a1, (__int64)v14, *(unsigned __int8 *)(a2 + 16));
              for ( i = *(volatile signed __int32 **)(a1 + 1504);
                    i != (volatile signed __int32 *)(a1 + 1504);
                    i = *(volatile signed __int32 **)i )
              {
                _interlockedbittestandset(i - 334, 0x1Du);
              }
              sub_14025302C(a1, (__int64)CurrentThread);
              v4 = 0;
            }
            sub_1402AD030(v7);
          }
          else
          {
            v4 = -1073741738;
          }
        }
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 2172), 0x19u);
      }
    }
    if ( v14 )
      sub_140419D6C((volatile signed __int64 *)v14);
  }
  return (unsigned int)v4;
}
