/*
 * XREFs of sub_140A36BE0 @ 0x140A36BE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1407969D0 @ 0x1407969D0 (sub_1407969D0.c)
 *     sub_140797594 @ 0x140797594 (sub_140797594.c)
 *     sub_1407981E8 @ 0x1407981E8 (sub_1407981E8.c)
 *     PcwAddInstance @ 0x1407E18E0 (PcwAddInstance.c)
 */

__int64 __fastcall sub_140A36BE0(int a1, __int64 a2)
{
  __int64 result; // rax
  struct _PCW_BUFFER *v3; // r13
  _DWORD *v4; // rdi
  __int64 v5; // r8
  signed __int64 **i; // rdx
  signed __int64 *v7; // rax
  NTSTATUS v8; // esi
  __int64 j; // r14
  __int64 v10; // rbx
  unsigned int v11; // esi
  int v12; // r15d
  __int64 v13; // rcx
  __int64 v14; // rax
  struct _PCW_DATA Data; // [rsp+38h] [rbp-29h] BYREF
  UNICODE_STRING Name; // [rsp+48h] [rbp-19h] BYREF
  _DWORD v17[3]; // [rsp+58h] [rbp-9h] BYREF
  __int64 v18; // [rsp+64h] [rbp+3h]
  int v19; // [rsp+6Ch] [rbp+Bh]
  __int128 v20; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v21; // [rsp+80h] [rbp+1Fh]

  *(_QWORD *)&Name.Length = 3014700LL;
  Name.Buffer = L"EventTracingCounterSet";
  result = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  if ( (unsigned int)(a1 - 2) <= 1 )
  {
    v3 = *(struct _PCW_BUFFER **)(a2 + 24);
    v4 = (_DWORD *)*((_QWORD *)sub_140347DB0() + 108);
    if ( v5 == 1 )
    {
      v18 = 0LL;
      v19 = 0;
      for ( i = 0LL; ; i = (signed __int64 **)v7 )
      {
        v7 = sub_1407969D0((__int64)v4, i, 0);
        if ( !v7 )
          break;
        if ( *((_DWORD *)v7 + 24) )
        {
          if ( (signed __int64 *)v7[7] == v7 + 7 )
            ++v19;
          else
            LODWORD(v18) = v18 + 1;
        }
        else
        {
          ++HIDWORD(v18);
        }
      }
      v17[0] = v4[1033];
      v17[2] = v4[1032];
      v17[1] = v4[1031];
      Data.Data = v17;
      Data.Size = 24;
      return (unsigned int)PcwAddInstance(v3, &Name, 0, 1u, &Data);
    }
    else
    {
      v8 = 0;
      for ( j = 0LL; (unsigned int)j < v4[4]; j = (unsigned int)(j + 1) )
      {
        v10 = sub_140797594((__int64)v4, j, 0);
        if ( v10 )
        {
          v20 = 0LL;
          v21 = 0LL;
          if ( *(_DWORD *)(v10 + 300) == 1 )
            LODWORD(v20) = *(_DWORD *)(v10 + 4) * *(_DWORD *)(v10 + 232);
          else
            DWORD1(v20) = *(_DWORD *)(v10 + 4) * *(_DWORD *)(v10 + 232);
          v11 = 0;
          v12 = dword_140D06884;
          LODWORD(v21) = *(_DWORD *)(v10 + 240);
          HIDWORD(v21) = *(_DWORD *)(v10 + 344);
          if ( (_DWORD)dword_140D06884 )
          {
            do
            {
              v13 = *(_QWORD *)(v10 + 1096);
              if ( v13 == qword_140D05008 )
                v14 = *(_QWORD *)(sub_140348800(v11) + 34472) + 320LL;
              else
                v14 = *(_QWORD *)(v13 + 4144) + ((unsigned __int64)v11 << 6);
              ++v11;
              *((_QWORD *)&v20 + 1) += *(_QWORD *)(*(_QWORD *)(v14 + 8) + 8 * j);
            }
            while ( v11 != v12 );
          }
          Data.Size = 24;
          Data.Data = &v20;
          v8 = PcwAddInstance(v3, (PCUNICODE_STRING)(v10 + 136), j, 1u, &Data);
          sub_1407981E8((unsigned int *)v10, 0);
          if ( v8 < 0 )
            break;
        }
      }
    }
    return (unsigned int)v8;
  }
  return result;
}
