/*
 * XREFs of ?UpdatePMPEffectToggle@CAudioStream@@AEAAXU_GUID@@H@Z @ 0x1800EE3C0
 * Callers:
 *     ?SetAudioEffect@CAudioStream@@QEAAJU_GUID@@H@Z @ 0x1800ED534 (-SetAudioEffect@CAudioStream@@QEAAJU_GUID@@H@Z.c)
 * Callees:
 *     memmove_0 @ 0x1800759B8 (memmove_0.c)
 *     ?_Clear_and_reserve_geometric@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAX_K@Z @ 0x1800DD8FC (-_Clear_and_reserve_geometric@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@AEAAX_K@Z.c)
 *     ??$emplace_back@AEBU_GUID@@@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@QEAA?A_TAEBU_GUID@@@Z @ 0x1800EAF68 (--$emplace_back@AEBU_GUID@@@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@QEAA-A_TAEBU_GUID@.c)
 */

void __fastcall CAudioStream::UpdatePMPEffectToggle(CAudioStream *this, struct _GUID *a2, int a3)
{
  struct _GUID *v3; // r9
  char *v5; // rsi
  _QWORD *v6; // rdx
  _QWORD *i; // rdi
  __int64 v8; // rax
  _QWORD *j; // rax
  __int64 v10; // rcx
  size_t v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // r14
  _QWORD *v14; // rsi
  signed __int64 v15; // r14
  char *v16; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    v3 = a2;
    v5 = (char *)this + 592;
    if ( a3 )
    {
      v6 = (_QWORD *)*((_QWORD *)this + 75);
      for ( i = *(_QWORD **)v5; i != v6; i += 2 )
      {
        v8 = *(_QWORD *)&v3->Data1 - *i;
        if ( *(_QWORD *)&v3->Data1 == *i )
          v8 = *(_QWORD *)v3->Data4 - i[1];
        if ( !v8 )
          break;
      }
      if ( i != v6 )
      {
        for ( j = i + 2; j != v6; j += 2 )
        {
          v10 = *(_QWORD *)&v3->Data1 - *j;
          if ( *(_QWORD *)&v3->Data1 == *j )
            v10 = *(_QWORD *)v3->Data4 - j[1];
          if ( v10 )
          {
            *(_OWORD *)i = *(_OWORD *)j;
            i += 2;
          }
        }
        if ( i != v6 )
        {
          v11 = *((_QWORD *)v5 + 1) - (_QWORD)v6;
          memmove_0(i, v6, v11);
          *((_QWORD *)v5 + 1) = (char *)i + v11;
        }
      }
    }
    else
    {
      std::vector<_GUID>::emplace_back<_GUID const &>((__int64)this + 592, a2);
    }
    v12 = *((_QWORD *)this + 78) + 56LL;
    if ( (char *)v12 != v5 )
    {
      v13 = *((_QWORD *)v5 + 1);
      v14 = *(_QWORD **)v5;
      v15 = v13 - (_QWORD)v14;
      if ( v15 >> 4 > (unsigned __int64)((__int64)(*(_QWORD *)(v12 + 16) - *(_QWORD *)v12) >> 4) )
        std::vector<_GUID>::_Clear_and_reserve_geometric((void **)v12, v15 >> 4);
      v16 = *(char **)v12;
      memmove_0(*(void **)v12, v14, v15);
      *(_QWORD *)(v12 + 8) = &v16[v15];
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x7D1,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)v3);
  }
}
