/*
 * XREFs of ??$_FindFirst@U_FindFirstFind@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@PEAUResourceHandle__@ExecutionModel@@@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@AEBA?AU_FindFirstFind@01@AEBQEAUResourceHandle__@ExecutionModel@@@Z @ 0x18004F2D8
 * Callers:
 *     ?GetResourceSetFromHandle@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAPEAVExternalResourceSet@2@@Z @ 0x18003AD40 (-GetResourceSetFromHandle@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAPEAVExt.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_FindFirst<utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_FindFirstFind,ExecutionModel::ResourceHandle__ *>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  unsigned __int64 v4; // r10
  __int64 v5; // rax
  _QWORD *v6; // rcx

  if ( *(_QWORD *)(a1 + 16) )
  {
    v4 = (0xC4CEB9FE1A85EC53uLL
        * ((0xFF51AFD7ED558CCDuLL * (*a3 ^ (*a3 >> 33))) ^ ((0xFF51AFD7ED558CCDuLL * (*a3 ^ (*a3 >> 33))) >> 33))) ^ ((0xC4CEB9FE1A85EC53uLL * ((0xFF51AFD7ED558CCDuLL * (*a3 ^ (*a3 >> 33))) ^ ((0xFF51AFD7ED558CCDuLL * (*a3 ^ (*a3 >> 33))) >> 33))) >> 33);
    v5 = *(_QWORD *)(a1 + 16) + 16 * (v4 & ((8LL << *(_BYTE *)(a1 + 32)) - 1));
    v6 = *(_QWORD **)v5;
    if ( *(_QWORD *)v5 )
    {
      while ( v6 != **(_QWORD ***)(v5 + 8) )
      {
        if ( v6[2] >= v4 )
        {
          if ( v6[2] > v4 )
            break;
          if ( *a3 == v6[3] )
          {
            *a2 = v6;
            return a2;
          }
        }
        v6 = (_QWORD *)*v6;
      }
    }
  }
  *a2 = a1;
  return a2;
}
