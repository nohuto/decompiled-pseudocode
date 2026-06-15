/*
 * XREFs of ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18001D768
 * Callers:
 *     ?RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180019EAC (-RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>>>>::_Insert_node(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v4; // r10
  _QWORD *v5; // rax
  __int64 v6; // rax
  _QWORD *i; // rdx
  _QWORD *v8; // r11
  _QWORD *v9; // rcx
  _QWORD *v10; // rbx
  __int64 *v11; // r9
  _QWORD *v12; // rax
  _QWORD *v13; // r9
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // r9
  __int64 v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rax

  ++a1[1];
  v4 = (_QWORD *)*a1;
  v5 = *(_QWORD **)a2;
  *(_QWORD *)(a3 + 8) = *(_QWORD *)a2;
  if ( v5 != v4 )
  {
    if ( *(_DWORD *)(a2 + 8) )
    {
      *v5 = a3;
      if ( v5 == (_QWORD *)*v4 )
        *v4 = a3;
    }
    else
    {
      v5[2] = a3;
      if ( v5 == (_QWORD *)v4[2] )
        v4[2] = a3;
    }
    v6 = *(_QWORD *)(a3 + 8);
    for ( i = (_QWORD *)a3; ; v6 = i[1] )
    {
      if ( *(_BYTE *)(v6 + 24) )
      {
        *(_BYTE *)(v4[1] + 24LL) = 1;
        return a3;
      }
      v8 = i + 1;
      v9 = (_QWORD *)i[1];
      v10 = v9 + 1;
      v11 = (__int64 *)v9[1];
      v12 = (_QWORD *)*v11;
      if ( v9 == (_QWORD *)*v11 )
      {
        v12 = (_QWORD *)v11[2];
        if ( !*((_BYTE *)v12 + 24) )
          goto LABEL_30;
        v13 = (_QWORD *)v9[2];
        if ( i == v13 )
        {
          i = (_QWORD *)i[1];
          v9[2] = *v13;
          if ( !*(_BYTE *)(*v13 + 25LL) )
            *(_QWORD *)(*v13 + 8LL) = v9;
          v13[1] = *v10;
          if ( v9 == *(_QWORD **)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v13;
          }
          else
          {
            v14 = (_QWORD *)*v10;
            if ( v9 == *(_QWORD **)*v10 )
              *v14 = v13;
            else
              v14[2] = v13;
          }
          *v13 = v9;
          v8 = v9 + 1;
          *v10 = v13;
        }
        else
        {
          v13 = (_QWORD *)i[1];
        }
        *((_BYTE *)v13 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*v8 + 8LL) + 24LL) = 0;
        v15 = *(_QWORD **)(*v8 + 8LL);
        v16 = (_QWORD *)*v15;
        *v15 = *(_QWORD *)(*v15 + 16LL);
        v17 = v16[2];
        if ( !*(_BYTE *)(v17 + 25) )
          *(_QWORD *)(v17 + 8) = v15;
        v16[1] = v15[1];
        if ( v15 == *(_QWORD **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v16;
        }
        else
        {
          v18 = (_QWORD *)v15[1];
          if ( v15 == (_QWORD *)v18[2] )
            v18[2] = v16;
          else
            *v18 = v16;
        }
        v16[2] = v15;
      }
      else
      {
        if ( !*((_BYTE *)v12 + 24) )
        {
LABEL_30:
          *((_BYTE *)v9 + 24) = 1;
          *((_BYTE *)v12 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(*v8 + 8LL) + 24LL) = 0;
          i = *(_QWORD **)(*v8 + 8LL);
          continue;
        }
        v19 = (_QWORD *)*v9;
        if ( i == (_QWORD *)*v9 )
        {
          i = (_QWORD *)i[1];
          v9 = (_QWORD *)*v9;
          *i = v19[2];
          v20 = v19[2];
          if ( !*(_BYTE *)(v20 + 25) )
            *(_QWORD *)(v20 + 8) = i;
          v9[1] = *v10;
          if ( i == *(_QWORD **)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v9;
          }
          else
          {
            v21 = (_QWORD *)*v10;
            if ( i == *(_QWORD **)(*v10 + 16LL) )
              v21[2] = v9;
            else
              *v21 = v9;
          }
          v9[2] = i;
          v8 = v10;
          *v10 = v9;
        }
        *((_BYTE *)v9 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*v8 + 8LL) + 24LL) = 0;
        v15 = *(_QWORD **)(*v8 + 8LL);
        v16 = (_QWORD *)v15[2];
        v15[2] = *v16;
        if ( !*(_BYTE *)(*v16 + 25LL) )
          *(_QWORD *)(*v16 + 8LL) = v15;
        v16[1] = v15[1];
        if ( v15 == *(_QWORD **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v16;
        }
        else
        {
          v22 = (_QWORD *)v15[1];
          if ( v15 == (_QWORD *)*v22 )
            *v22 = v16;
          else
            v22[2] = v16;
        }
        *v16 = v15;
      }
      v15[1] = v16;
    }
  }
  *v4 = a3;
  v4[1] = a3;
  v4[2] = a3;
  *(_BYTE *)(a3 + 24) = 1;
  return a3;
}
